// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc308/tasks/abc308_b
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
        int n, m;
        cin >> n >> m;
        vector<string> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        map<string, int> map;
        for (int i = 0; i < m; i++) {
            string color;
            cin >> color;
            map[color] = 0;
        }
        int base_price;
        cin >> base_price;
        for (auto kv : map) {
            int price;
            cin >> price;
            map[kv.first] = price; 
        }
        db(c);
        db(map);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            string plate_color = c[i];
            if (map.find(plate_color) != map.end()) {
                sum += map[plate_color];
            } else {
                sum += base_price;
            }
        }
        cout << sum << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























