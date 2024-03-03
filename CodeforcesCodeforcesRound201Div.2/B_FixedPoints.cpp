// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/347/B

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
const int MX = 1'000'000;
const int MN = -1'000'000;

// ================= Order ================= //
// tc: 1
// n: 100000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int cnt = 0;
        bool swap = false;
        for (int i = 0; i < n; i++) {
            if (v[i] == i) {
                cnt++;
                continue;
            }
            if (!swap && v[v[i]] == i) {
                cnt += 2;
                swap = true;
            }
        }
        if (!swap && cnt < n) {
            cnt++;
        }
        cout << cnt << '\n';
    }
}
// ================= Notes ================= //
/*
* fixed point is a point where: a[i] = i
*                               value equals its position
*
* optimal seq is asc order
* can I fix 2 points with one swap?
* 1) both wrong -> swap -> both can be fixed (best option)
* 2) both wrong -> swap -> one could be fixed (second best option)
* 3) doesn't matter, can't fix it
*/
