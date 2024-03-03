// time-limit: 2000
// problem-url: https://codeforces.com/contest/1772/problem/B

// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
#ifdef DEBUG
#define db(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define db(x...)
#endif

const int MOD = 1000000007;

// ================= Order ================= //

// ================= Solution ================= //
void shift_right(vector<int> &v) {
    int n = 4;
    int temp = v[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        v[i + 1] = v[i];
    }
    v[0] = temp;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> d >> c;
        vector<int> v {a, b, c, d};
        string ans = "NO";
        for (int i = 1; i <= 4; i++) {
            db(v);
            if (v[0] < v[1] && v[0] < v[3] && v[2] > v[1] && v[2] > v[3]) {
                ans = "YES";
                break;
            }
            shift_right(v);
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
*   top-left < top-right AND top-left < bottom-left
*   bottom-right > top-right AND bottom-right > bottom-left
*
*   Is there atleast 1/4 possible positions where this is true?
*
*   1 3 7 5 -> 5 1 3 7
*/
