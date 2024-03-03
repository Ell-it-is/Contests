// time-limit: 2000
// problem-url: https://codeforces.com/contest/1850/problem/E
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
// n: 200000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n, c;
        cin >> n >> c;
        vector<ll> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        ll used_area_for_pics = 0;
        for (int i = 0; i < n; i++) {
            used_area_for_pics += s[i] * s[i];
        }
        c -= used_area_for_pics;
        ll w = 1;
        ll used_border_area = 0;
        ll diff = c - used_border_area;
        while (diff > 0) {
            used_border_area = 0;
            w *= 2;
            for (int i = 0; i < n; i++) {
                used_border_area += (1ll * w * 2 + s[i]) * (1ll * w * 2 + s[i]) - (s[i] * s[i]);
            }
            diff = c - used_border_area;
        }
        used_border_area = 0;
        w /= 2;
        for (int i = 0; i < n; i++) {
            used_border_area += (1ll * w * 2 + s[i]) * (1ll * w * 2 + s[i]) - (s[i] * s[i]);
        }
        diff = c - used_border_area;
        while (diff > 0) {
            used_border_area = 0;
            w++;
            for (int i = 0; i < n; i++) {
                used_border_area += (1ll * w * 2 + s[i]) * (1ll * w * 2 + s[i]) - (s[i] * s[i]);
            }
            diff = c - used_border_area;
        }
        cout << w << '\n';
    }
}
// ================= Notes ================= //
/*
    sum of orange background = c
    s[i] - size of one side of i-th painting
    s[i] * s[i] - the area of i-th painting

    What do we know?
    The size of each picture
    The area of each picture

    The cardboard area for each picture was chosen so that it would remain constant across all pictures
    This constant is called 'w' which I am looking for.

    I know for sure I have to use (s[i] * s[i]) + (s[i + 1] * s[i + 1]) + ... + (s[n] * s[n]) of cardboard
        - (3 * 3) + (2 * 2) + (1 * 1) = 9 + 4 + 1 = 14
        -> 50 - 14 = 36 of cardboard remains to create the width
        (9 + 16) + (4 + 12) + (1 + 8) = 25 + 16 + 9 = 50 = c

    
*/

























