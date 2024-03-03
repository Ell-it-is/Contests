// time-limit: 3000
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
// tc: 1
// n: 200000
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int x, n;
        cin >> x >> n;
        priority_queue<int, vector<int>, greater<int>> min_pq;
        for (int i = 0; i < n; i++) {
            int d;
            cin >> d;
            min_pq.push(d);
        }
        ll sum = 0;
        while (min_pq.top() != x) {
            int min = min_pq.top();
            min_pq.pop();
            int min2 = min_pq.top();
            min_pq.pop();
            int log = min + min2;
            sum += log;
            min_pq.push(log);
        }
        cout << sum << '\n';
    }
}
// ================= Notes ================= //
/*
 *  1*(10) + 2*(5) + 2*(3 + 2) + 2*(2) = 34
 */

























