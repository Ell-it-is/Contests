// time-limit: 1000
// problem-url: https://codeforces.com/contest/1855/problem/A
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
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (p[i] == (i + 1)) cnt++;
        }
        int ans = (cnt == 0 ? 0 : 1);
        for (int i = 2; i <= cnt; i++) {
            if (i % 2 != 0) ans++;
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
    // each student can sit on any chair besides his own
    // -> p[i] != i

    TC: (wrong where p[i] == i)
    1: 0 wrong
    2: 3 wrong
    3: 3 wrong
    4: 2 wrong
    5: 2 wrong

    1 2 5 4 3
    2 1 5 4 3
    2 4 5 1 3

    1 2
    2 1

    1 2 3
    2 1 3
    2 3 1

    1 2 3 4
    2 1 3 4
    2 1 4 3

    1 2 3 4 5
    2 1 3 4 5
    2 1 4 3 5
    2 1 4 5 3

    1 2 3 4 5 6
    2 1 3 4 5 6
    2 1 4 3 5 6
    2 1 4 3 6 5

    1 2 3 4 5 6 7
    2 1 3 4 5 6 7
    2 1 4 3 5 6 7
    2 1 4 3 6 5 7
    2 1 4 3 6 7 5

    1 2 3 4 5 6 7 8
    2 1 3 4 5 6 7 8
    2 1 4 3 5 6 7 8
    2 1 4 3 6 5 7 8
    2 1 4 3 6 5 8 7

    Pattern:
    2 - 1
    3 - 2
    4 - 2
    5 - 3
    6 - 3
    7 - 4
    8 - 4
    9 - 5

    on every new odd number ++ (starting at 2)
    
*/

























