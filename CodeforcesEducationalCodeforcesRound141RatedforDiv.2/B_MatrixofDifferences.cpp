// time-limit: 2000
// problem-url: https://codeforces.com/contest/1783/problem/B
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
        int n;
        cin >> n;
        vector<int> v(n * n);
        for (int i = 1; i <= n * n; i++) {
            v[i - 1] = i;
        }
        int i = 0;
        int j = (n * n) - 1;
        bool min = true;
        bool switch_row = false;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        for (int row = 0; row < n; row++) {
            if (switch_row) {
                for (int col = n - 1; col >= 0; col--) {
                    if (min) {
                        ans[row][col] = v[i++];
                    } else {
                        ans[row][col] = v[j--];
                    }
                    min = !min;
                }
                switch_row = !switch_row;
            } else {
                for (int col = 0; col < n; col++) {
                    if (min) {
                        ans[row][col] = v[i++];
                    } else {
                        ans[row][col] = v[j--];
                    }
                    min = !min;
                }
                switch_row = !switch_row;
            }
        }
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < n; col++) {
                cout << ans[row][col] << " "; 
            }
            cout << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























