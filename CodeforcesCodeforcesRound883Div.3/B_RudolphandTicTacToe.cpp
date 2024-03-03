// time-limit: 1000
// problem-url: https://codeforces.com/contest/1846/problem/B
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
    cin >> tt;
    while (tt--) {
        vector<string> v(3);
        for (int i = 0; i < 3; i++) {
            string s;
            cin >> s;
            v[i] = s;
        }
        db(v);
        // check row
        string w = "";
        for (int i = 0; i < 3; i++) {
            if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.') {
                w = v[i][0];
                break;
            }
        }
        // check col
        for (int i = 0; i < 3; i++) {
            if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.') {
                w = v[0][i];
                break;
            }
        }
        // check diag
        if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.') {
            w = v[0][0];
        }
        if (v[2][0] == v[1][1] && v[1][1] == v[0][2] && v[2][0] != '.') {
            w = v[2][0];
        }
        if (w != "") {
            cout << w << '\n';
        } else {
            cout << "DRAW" << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *   Either a win:
 *   
 *
 *   Or a draw:
 *   
 */

























