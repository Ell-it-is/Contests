// time-limit: 1000
// problem-url: https://www.codechef.com/START99D/problems/SEGTHREE
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
// tc: 1
// n: 100000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        // each customer at 1 table
        int n;
        cin >> n; // # tables
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // # ingredients in i-th dish
        }
        vector<ll> p;
        ll sum = a[0] + a[1] + a[2];
        p.push_back(sum);
        for (int i = 3; i < n; i++) {
            sum -= a[i - 3];
            sum += a[i];
            p.push_back(sum);
        }
        ll total = 0;
        for (int i = 0; i < (int)p.size(); i++) {
            ll cnt = 0;
            while (p[i] % 3 != 0) {
                p[i]++;
                cnt++;
            }
            if (i < (int)p.size() - 1) {
                p[i + 1] += cnt;
            }
            if (i < (int)p.size() - 2) {
                p[i + 2] += cnt;
            }
            total += cnt;
        }
        cout << total << '\n';
    }
}
// ================= Notes ================= //
/*
    check: n - 3 + 1 subarrays of size 3
*/

























