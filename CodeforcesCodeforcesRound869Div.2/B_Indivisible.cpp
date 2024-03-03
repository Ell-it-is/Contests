// time-limit: 1000
// problem-url: https://codeforces.com/contest/1818/problem/B
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
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        } if (n == 2) {
            cout << 1 << " " << 2 << '\n';
        } else if ((n * (n + 1) / 2) % n == 0) {
            cout << -1 << '\n';
            continue;
        } else {
            vector<int> p(n);
            for (int i = 0; i < n; i++) {
                p[i] = i + 1;
            }
            for (int i = 0; i < n - 1; i += 2) {
                std::swap(p[i], p[i + 1]);
            }
            for (int x : p) {
                cout << x << " ";
            }
            cout << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *  the sum of the elements is not divisible by size of given subset
 *  - FOR ALL subsets it is true that: sum(p on that subset) % (subset_size) != 0
 *
 *  Observations:
 *  - we don't consider subsets of size 1
 *  - range does not change regardless of the elements position
 *  - sum does change for all subsets smaller than the full [l - r]
 *      - IF full range cannot be fixed (which it cannot, then the permutation is always bad) -> -1
 *
 *  For each subset I need sum that is not a multiple of range.
 *  
 *
 *  perm - range - sum - divisible
 *  1 - 1 - 1 -> no subsets > 1 -> no
 *  1 2 - 2 - 3 - 3 / 2 -> no
 *  1 2 3 - 3 - 6 -> 6 / 3 -> yes
 *  1 2 3 4 - 4 - 10 -> 10 / 4 -> no
 *  1 2 3 4 5 - 5 - 15 -> 15 / 5 -> yes
 *  1 2 3 4 5 6 - 6 - 21 -> 21 / 6 -> no    2 1 4 3 6 5
 *  1 2 3 4 5 6 7 - 7 - 28 -> 28 / 7 -> yes
 *  1 2 3 4 5 6 7 8 - 8 - 36 -> 36 / 8 -> no    
 *  1 2 3 4 5 6 7 8 9 - 9 - 45 -> 45 / 9 -> yes
 *  1 2 3 4 5 6 7 8 9 10 - 10 - 55 -> 55 / 10 -> no
 */

























