// time-limit: 2000
// problem-url: https://codeforces.com/contest/1814/problem/C
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
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn)
// ================= Solution ================= //
void print_boxes(vector<int> v) {
    cout << v.size() << " ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        multimap<int, int, greater<int>> mmap;
        for (int i = 0; i < n; i++) {
            mmap.insert({v[i], i + 1});
        }
        // for how many boxes is it still worth to give them to faster robot
        int min = std::min(s1, s2);
        int max = std::max(s1, s2);
        vector<int> l1;
        vector<int> l2;
        int t1 = min;
        int t2 = max;
        for (auto it = mmap.begin(); it != mmap.end(); it++) {
            if (t1 <= t2) {
                l1.push_back((*it).second);
                t1 += min;
            } else {
                l2.push_back((*it).second);
                t2 += max;
            }
        }
        if (s1 == max) {
            print_boxes(l2);
            print_boxes(l1);
        } else {
            print_boxes(l1);
            print_boxes(l2);
        }
    }
}
// ================= Notes ================= //
/*
 *
 */
