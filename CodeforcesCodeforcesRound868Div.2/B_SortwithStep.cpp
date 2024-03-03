// time-limit: 1000
// problem-url: https://codeforces.com/contest/1823/problem/B
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
// tc: 10000
// n: 200000
// time(s): 2
// order: O(1), O(logn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        int ans = 0;
        int cnt = 0;
        int pos1 = 0;
        int num1 = 0;
        int pos2 = 0;
        int num2 = 0;
        for (int i = 0; i < n; i++) {
            int num = p[i];
            int cur_pos = i + 1;
            int cor_pos = p[i];
            if (cur_pos != cor_pos) {
                int dist = std::abs(cur_pos - cor_pos);
                if (dist % k != 0) {
                    cnt++;
                    if (cnt == 1) {
                        pos1 = cur_pos;
                        num1 = num;   
                    }
                    if (cnt == 2) {
                        pos2 = cur_pos;
                        num2 = num;
                        break;
                    }
                }
            }
        }
        if (cnt > 0) {
            p[pos1 - 1] = num2;
            p[pos2 - 1] = num1;
            cnt = 0;
            for (int i = 0; i < n; i++) {
                int num = p[i];
                int cur_pos = i + 1;
                int cor_pos = p[i];
                if (cur_pos != cor_pos) {
                    int dist = std::abs(cur_pos - cor_pos);
                    if (dist % k != 0) {
                        cnt++;
                        break;
                    }
                }
            }
            if (cnt == 0) {
                ans = 1;
            } else {
                ans = -1;
            }
        }
        cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























