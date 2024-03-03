// time-limit: 1000
// problem-url: https://www.codechef.com/problems/TRANCHAIN
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
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<string> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int cnt_a = 0;
        int cnt_b = 0;
        int cnt_ab = 0;
        int cnt_0 = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == "A") {
                cnt_a++;
            }
            if (b[i] == "B") {
                cnt_b++;
            }
            if (b[i] == "AB") {
                cnt_ab++;
            }
            if (b[i] == "O") {
                cnt_0++;
            }
        }
        int chain_length = cnt_0 + std::max(cnt_a, cnt_b) + cnt_ab;
        cout << chain_length << '\n';
    }
}
// ================= Notes ================= //
/*
 *  You must chain AB's together, they should also be at the end of a chain
 *  O -> max(A, B) -> (AB)
 */

























