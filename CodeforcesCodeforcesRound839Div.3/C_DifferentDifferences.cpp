// time-limit: 2000
// problem-url: https://codeforces.com/contest/1772/problem/C

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

// ================= Order ================= //
// tc: 819
// n: 40
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int k, n;
        cin >> k >> n;
        vector<int> a(k);
        vector<int> optimal;
        int best = 1;
        int steps = 1;
        while (best <= n) {
            optimal.push_back(best);
            best += steps;
            steps = steps + 1;
        }
        if (optimal.size() >= k) {
            for (int i = 0; i < k; i++) {
                cout << optimal[i] << " ";
            }
        } else {
            int remains = k - optimal.size();
            remains -= n - optimal.back();
            while(remains > 0) {
                optimal.pop_back();
                remains = k - optimal.size();
                remains -= n - optimal.back();
            }
            for (int i = 0; i < optimal.size(); i++) {
                a[i] = optimal[i];
            }
            for (int i = 0; i < k; i++) {
                if (a[i] != 0) continue;
                a[i] = a[i - 1] + 1;
            }
            for (int i = 0; i < k; i++) {
                cout << a[i] << " ";
            }
        }
        cout << '\n';
    }
}
// ================= Notes ================= //
/*
*   characteristics - # of distinct elements
*       - I need as many subtractions that would result in unique diferences
*           - Is it possible to have all unique differences?
*               - I can have at most (k - 1) unique differences
*           - If we took 1 to N numbers, then all differences are 1 -> bad
*
*   k == n -> 1...n -> 1 distinct
*   diff(k, n) is 1 -> 2 distinct
*   diff(k, n) is 2 -> 2 distinct
*   diff(k, n) is 3 -> 3 distinct
*   ...
*
*   for all elements of arr 'a': 1 <= a[i] <= n
*   arr 'a' is strictly increasing
*   its certain we will always have as many unique numbers as the array is big
*/
