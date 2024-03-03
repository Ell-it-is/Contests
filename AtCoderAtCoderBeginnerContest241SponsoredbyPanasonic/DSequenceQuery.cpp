// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc241/tasks/abc241_d
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
    multiset<ll> mset;
    while (tt--) {
        int n;
        cin >> n;
        if (n == 1) {
            ll x;
            cin >> x;
            mset.insert(x);
        } else if (n == 2) {
            ll x;
            int k;
            cin >> x >> k;
            if (mset.size() == 0) {
                cout << -1 << '\n';
            } else {
                auto it = mset.upper_bound(x);
                while (it != mset.begin() && k > 0) {
                    std::advance(it, -1);
                    k--;
                }
                if (k == 0) {
                    cout << *it << '\n';
                } else {
                    cout << -1 << '\n';
                }
            }
        } else if (n == 3) {
            ll x;
            int k;
            cin >> x >> k;
            if (mset.size() == 0) {
                cout << -1 << '\n';
            } else {
                auto it = mset.lower_bound(x);
                while (it != mset.end() && k > 1) {
                    std::advance(it, 1);
                    k--;
                }
                if (it != mset.end() && k == 1) {
                    cout << *it << '\n';
                } else {
                    cout << -1 << '\n';
                }
            }
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























