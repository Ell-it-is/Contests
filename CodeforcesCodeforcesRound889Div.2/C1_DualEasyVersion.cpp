// time-limit: 1000
// problem-url: https://codeforces.com/contest/1855/problem/C1
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
// tc: 500
// n: 20
// time(s): 1
// order: O(1), O(logn), O(n), O(nlogn), O(n^2)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
		bool all_zero = true;
        bool all_neg = true;
        bool all_pos = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
			if (a[i] != 0) all_zero = false;
            if (a[i] > 0) all_neg = false;
            if (a[i] < 0) all_pos = false;
        }
        if (all_zero) {
            cout << 0 << '\n';
        } else {
            if (all_neg) {
                cout << n - 1 << '\n';
                for (int i = n - 1; i > 0; i--) {
                    cout << i << " " << i + 1 << '\n';
                }
            } else if (all_pos) {
                cout << n - 1 << '\n';
                for (int i = 2; i <= n; i++) {
                    cout << i << " " << i - 1 << '\n';
                }
            } else {
                int pos = 0;
                int idx = 0;
                vector<pair<int, int>> ans;
                for (int i = 0; i < n; i++) {
                    if (a[i] > 0) {
                        pos = a[i];
                        idx = i + 1;
                        for (int j = 0; j < 5; j++) {
                            ans.push_back({idx, idx});
                        }
                        break;
                    }
                }
                for (int i = 0; i < n; i++) {
                    if (a[i] < 0) {
                        a[i] += pos;
                        ans.push_back({i + 1, idx});
                    }
                }
                for (int i = 2; i <= n; i++) {
                    ans.push_back({i, i - 1});
                }
                cout << (int)ans.size() << '\n';
                for (auto&& [first, second]  : ans) {
                    cout << first << " " << second << '\n';
                }
            }
        }
    }
}
// ================= Notes ================= //
/*
    a[i] is in a set of Z

    For each operation:
    - choose 2 indicies (i, j)
    - a[i] += a[j]

    Bound on operations: 50

    Q: Can you make array non-decreasing in <= 50 operations?

    Problem when a[i] > a[i + 1]: (decreasing or non-increasing sequence)
    We have 2 options... {
        Make a[i] <= a[i + 1]
        fix a[i]...
        To decrease a[i], we must add a[j] < 0
    }
    Or {
        Make a[i + 1] >= a[i]
        fix a[i + 1]...
        To increase a[i + 1], we must add a[j] > 0
    }    
*/

























