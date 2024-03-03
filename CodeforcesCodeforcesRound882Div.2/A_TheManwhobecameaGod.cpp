// time-limit: 1000
// problem-url: https://codeforces.com/contest/1847/problem/A
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
// tc: 100
// n: 100
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn), O(n^2)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        if (k == n) {
            cout << ans << '\n';
            continue;
        }
        multiset<int> mset;
        for (int i = 0; i < n - 1; i++) {
            mset.insert(std::abs(v[i] - v[i +1]));
        }
        db(mset);
        auto it = mset.begin();
        std::advance(it, std::abs((int)mset.size() - (k - 1)));
        mset.erase(mset.begin(), it);
        db(mset);
        int cur = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = std::abs(v[i] - v[i + 1]);
            if (mset.count(diff)) {
                mset.erase(mset.find(diff));
                ans += cur;
                cur = 0;
            } else {
                cur += diff;
            }
        }
        ans += cur;
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *  optimal is to put into group a single character -> sum = 0
 *  
 */

























