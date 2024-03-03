// time-limit: 3000
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        multiset<int> mset;
        for (int i = 0; i < n; i++) {
            mset.insert(v[i]);
        }
        bool ans = false;
        int a = 0;
        int b = 0;
        for (int i = 0; i < n; i++) {
            int diff = x - v[i];
            if (mset.find(diff) != mset.end()) {
                if (diff == v[i]) {
                    if (mset.count(diff) == 1) continue;
                }
                ans = true;
                a = v[i];
                b = diff;
                break;
            }
        }
        if (!ans) {
            cout << "IMPOSSIBLE" << '\n';
        }
        int j = 0;
        int k = 0;
        if (a != b) {
            for (int i = 0; i < n; i++) {
                if (v[i] == a) j = i;
                if (v[i] == b) k = i;
            }   
        } else {
            for (int i = 0; i < n; i++) {
                if (v[i] == a) {
                    j = i;
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--) {
                if (v[i] == b) {
                    k = i;
                    break;
                }
            }
        }
        cout << (j + 1) << " " << (k + 1) << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























