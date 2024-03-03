// time-limit: 2000
// problem-url: https://codeforces.com/contest/1822/problem/B
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
        vector<int> neg;
        vector<int> pos;
        bool is_zero = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x < 0) neg.push_back(x);
            if (x > 0) pos.push_back(x);
            if (x == 0) is_zero = true;
        }
        std::sort(pos.begin(), pos.end(), greater<int>());
        ll max_pos = 0;
        for (int j = 1; j < (int)pos.size(); j++) {
            max_pos = std::max(max_pos, 1ll * pos[0] * pos[j]);
        }
        std::sort(neg.begin(), neg.end());
        ll max_neg = 0;
        for (int j = 1; j < (int)neg.size(); j++) {
            max_neg = std::max(max_neg, 1ll * neg[0] * neg[j]);
        }
        ll max = std::max(max_pos, max_neg);
        if (max == 0 && is_zero) {
            cout << 0 << '\n';
        } else if (max == 0) {
            cout << 1ll * pos[0] * neg[0] << '\n';
        } else {
            cout << max << '\n';
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























