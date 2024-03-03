// time-limit: 2992
// problem-url: https://www.codechef.com/problems/DAILY
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#define db(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define db(x...)
#endif

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x);
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

const int MOD = 1000000007;
const double PI = 3.14159265359;

// ================= Order ================= //

// ================= Solution ================= //
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int x, n;
        cin >> x >> n;
        vector<string> cars(n);
        for (int i = 0; i < n; i++) {
            cin >> cars[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            string car = cars[i];
            int cur = 0;
            int first = 0;
            int second = 1;
            for (int j = 0; j < 9; j++) {
                int free_places = 0;
                for (int k = 0; k < 4; k++) {
                    if (car[cur++] == '0') free_places++;
                }
                if (car[54 - 1 - first] == '0') free_places++;
                if (car[54 - 1 - second] == '0') free_places++;
                if (free_places >= x) {
                    ans += factorial(free_places) / ((factorial(x) * factorial(free_places - x)));
                }
                first += 2;
                second += 2;
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
    0 - free
    1 - booked

    n - 6 positions
    m - 3 ppl
    6! / (3! * (6 - 3)! = 720 / (6 * 6) = 20
*/

























