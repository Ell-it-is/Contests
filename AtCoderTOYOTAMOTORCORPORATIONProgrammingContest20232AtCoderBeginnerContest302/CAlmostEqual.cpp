// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc302/tasks/abc302_c
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

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        db(v);
        std::sort(v.begin(), v.end());
        do {
            db(v);
            bool all_pairs_are_fine = true;
            for (int i = 0; i < n - 1; i++) {
                int cnt = 0;
                for (int j = 0; j < m; j++) {
                    if (v[i][j] != v[i + 1][j]) cnt++;
                }
                if (cnt != 1) {
                    all_pairs_are_fine = false;
                    break;
                }
            }
            if (all_pairs_are_fine) {
                cout << "Yes" << '\n';
                return 0;
            }
        } while (std::next_permutation(v.begin(), v.end()));
        cout << "No" << '\n';
    }
}
// ================= Notes ================= //
/*
 *  T[i] should be exactly 1 char off T[i + 1] and vice versa.
 *
 *  Permutations of at most 8 strings - go through all of them and check if its possible
 *  8! = 8 * 7! = 8 * 7 * 6! = 8 * 7 * 720 = 8 * 5040 = 40320 possible permutations at worst case
 */

























