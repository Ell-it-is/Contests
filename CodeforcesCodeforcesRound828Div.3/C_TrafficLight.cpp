// time-limit: 1000
// problem-url: https://codeforces.com/contest/1744/problem/C
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
// n: 200000
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        if (c == 'g') {
            cout << 0 << '\n';
            continue;
        }
        vector<int> gs;
        vector<int> cs;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                cs.push_back(i + 1);
            }
            if (s[i] == 'g') {
                gs.push_back(i + 1);
            }
        }
        int dist = INT_MIN;
        for (int i = 0; i < (int)cs.size(); i++) {
            for (int j = 0; j < (int)gs.size(); j++) {
                if (gs[j] > cs[i]) {
                    dist = std::max(dist, std::abs(gs[j] - cs[i]));
                    break;
                } else {
                    if (j == (int) gs.size() - 1) {
                        dist = std::max(dist, (n - cs[i]) + gs[0]);
                    }
                }
            }
        }
        cout << dist << '\n';
    }
}
// ================= Notes ================= //
/*
 *  You need to output the max dist between 'c'{r, y} and 'g' in modular arithmetics (circle wise)
 *  I need to ask, where is the next closest 'g' from current 'c'?
 *  abu
 */

























