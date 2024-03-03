// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/82/A

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

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<string> ans {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
        ll low = 1;
        ll high = 5;
        int k = 1;
        int layer = 0;
        while (n > high) {
            low += k * 5;
            k *= 2;
            high += k * 5;
            layer++;
        }
        int words = 1 * std::pow(2, layer);
        int ans_cnt = 0;
        int word_cnt = 0;
        for (int i = low; i <= high; i++) {
            if (word_cnt == words) {
                ans_cnt++;
                word_cnt = 0;
            }
            word_cnt++;
            if (i == n) {
                break;
            }
        }
        cout << ans[ans_cnt] << '\n';
    }
}
// ================= Notes ================= //
/*
*   ans: n-th name, that is after making (n - 1) operations, print the first person in queue
*   names: a, b, c, d, e
*
*   a b c d e
*   b c d e a a
*   c d e a a b b
*   ...
*   a a b b c c d d e e
*   a b b c c d d e e a a
*   b b c c d d e e a a a a
*
*   1-5 -> 1 word         1x section by 5
*   6-15 -> 2 words       2x sections by 5
*   16-35 -> 4 words      4x sections by 5
*   36-75 -> 8 words      8x sections by 5
*   ...
*/
