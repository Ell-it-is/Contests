// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/55/A

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
// n: 1000
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn), O(n^2)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<bool> v(n + 1, false);
        v[0] = true;
        v[1] = true;
        int pos = 1;
        int k = 1;
        int i = 0;
        while (i < n) {
            pos += k % n;
            if (pos > n) {
                pos = pos % n;
            }
            db(pos);
            v[pos] = true;
            k++;
            i++;
        }
        string ans = "YES";
        for (bool b : v) {
            if (!b) {
                db(b);
                ans = "NO";
                break;
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
* 1 2 3 ... n -> 1 2 3 ... n
* - regardless of where the flea is she must sit at n - 1 hassocks
*
* (clock-wise)
* 1 min - 1 jump
* 2 min - 2 jumps
* ...
*
*/
