// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc309/tasks/abc309_b
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

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (s[j] == '0') {
                    v[i][j] = 0;
                } else {
                    v[i][j] = 1;
                }
            }
        }
        string s = "";
        for (int i = 0; i < n - 1; i++) {
            s += to_string(v[0][i]);
        }
        for (int i = 0; i < n - 1; i++) {
            s += to_string(v[i][n - 1]);
        }
        for (int i = n - 1; i > 0; i--) {
            s += to_string(v[n - 1][i]);
        }
        for (int i = n - 1; i > 0; i--) {
            s += to_string(v[i][0]);
        }
        s = s.back() + s.substr(0, 4 * n - 4 - 1);
        int j = 0;
        for (int i = 0; i < n - 1; i++, j++) {
            v[0][i] = s[j] - '0';
        }
        for (int i = 0; i < n - 1; i++, j++) {
            v[i][n - 1] = s[j] - '0';
        }
        for (int i = n - 1; i > 0; i--, j++) {
            v[n - 1][i] = s[j] - '0';
        }
        for (int i = n - 1; i > 0; i--, j++) {
            v[i][0] = s[j] - '0';
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << v[i][j];
            }
            cout << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *  Read as: left to right
 *  top - right shift
 *  right - right shift
 *  bottom - right shift
 *  left - right shift
 */

























