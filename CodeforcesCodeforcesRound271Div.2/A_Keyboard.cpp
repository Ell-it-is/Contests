// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/474/A
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
// tc: 1
// n: 100
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn), O(n^2), O(n^3)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        char c;
        cin >> c;
        string s;
        cin >> s;
        vector<string> v(3, "");
        v[0] = "qwertyuiop";
        v[1] = "asdfghjkl;";
        v[2] = "zxcvbnm,./";
        for (int i = 0; i < (int)s.size(); i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 10; k++) {
                    if (v[j][k] == s[i]) {
                        if (c == 'R') {
                            cout << v[j][k - 1];
                        } else {
                            cout << v[j][k + 1];
                        }
                    }
                }
            }
        }
        cout << '\n';
    }
}
// ================= Notes ================= //
/*
 *  'R' - you output chars to the left
 *      he can press...[1]...[n - 1]
 *  'L' - you output chars to the right
 *      he can press...[0]...[n - 2]
 */

























