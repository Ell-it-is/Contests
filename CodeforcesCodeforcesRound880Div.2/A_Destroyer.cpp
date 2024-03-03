// time-limit: 1000
// problem-url: https://codeforces.com/contest/1836/problem/A
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
// n: 200
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn), O(n^2), O(n^3)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        string ans = "NO";
        map<int, int, greater<int>> map;
        for (int x : v) {
            map[x]++;
        }
        for (auto it = map.begin(); it != map.end(); it++) {
            int key = (*it).first; // report numbers
            int cnt = (*it).second; // count of report numbers
            for (int i = key - 1; i >= 0; i--) {
                if (map[i] >= cnt) {
                    map[i] -= cnt;
                } else {
                    ans = "NO"; break;
                }
            }
            if (ans == "NO") break;
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  for each l[i] there must be l[i] - 1,
 *  for each l[i - 1] there must be l[i - 2]
 *  ...
 *  for l[i] = 0, there doesn't have to be anything
 *  
 */

























