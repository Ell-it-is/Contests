// time-limit: 1000
// problem-url: https://codeforces.com/contest/1834/problem/B
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
        string l, r;
        cin >> l >> r;
        int n = (int) l.size();
        int m = (int) r.size();
        // prepend shorter with 0's
        if (n != m) {
            int diff = std::abs(n - m);
            string s = "";
            for (int i = 0; i < diff; i++) {
                s += '0';
            }
            if (n < m) {
                s += l;
                l = s;
            } else {
                s += r;
                r = s;
            }
        }
        // find higher number pos from which we start with 0's
        // find lower number pos from which we start with 9's
        int pos = -1;
        for (int i = 1; i < m; i++) {
            int a = l[i - 1] - '0';
            int b = r[i - 1] - '0';
            if (std::abs(a - b) >= 1) {
                pos = i;
                break;
            }
        }
        db(l, r);
        db(pos);
        if (pos != -1) {
            for (int i = pos; i < m; i++) {
                r[i] = '0';
            }
            for (int i = pos; i < m; i++) {
                l[i] = '9';
            }
        }
        db(l, r);
        db(pos);
        // calculate their diff sum
        ll sum = 0;
        for (int i = 0; i < m; i++) {
            sum += std::abs(r[i] - l[i]);
        }
        cout << sum << '\n';
    }
}
// ================= Notes ================= //
/*
 *  first such position where previous digit of my number is greater -> append 0's
 *  357 - 489 -> second position -> 400 -> 357
 *  357 - 389 -> third position -> 380 -> 357
 *  4529 - 7815 -> second position -> 7000 -> 4529
 *                                    4999
 *
 *  035 - 389 -> 300                                  
 *
 *  first such position where previous digit of number is greater -> I can put all 9's                                  
 */

























