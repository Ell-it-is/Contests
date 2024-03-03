// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc310/tasks/abc310_b
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
bool is_set2_subset(set<int>& set1, set<int>& set2) {
    if (std::includes(set1.begin(), set1.end(), set2.begin(), set2.end())) {
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<pair<pair<int, int>, set<int>>> v(n);
        for (int i = 0; i < n; i++) {
            int p, c;
            cin >> p >> c;
            set<int> set;
            for (int j = 0; j < c; j++) {
                int x;
                cin >> x;
                set.insert(x);
            }
            v[i] = {{p, c}, set};
        }
        std::sort(v.begin(), v.end(), [](auto &left, auto &right) {  
            return left.first.first > right.first.first;
        });
        bool ans = false;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int p1 = v[i].first.first;
                int p2 = v[j].first.first;
                if (p1 >= p2) {
                    set<int> set_i = v[i].second;
                    set<int> set_j = v[j].second;
                    int c1 = v[i].first.second;
                    int c2 = v[j].first.second;
                    if (is_set2_subset(set_j, set_i)) {
                        if (p1 > p2 || c2 > c1) {
                            ans = true;
                            break;
                        }
                    }
                }
            }
        }
        cout << (ans ? "Yes" : "No") << '\n';
    }
}
// ================= Notes ================= //
/*
    N - products
    P[i] - price for i-th product
            - each product has C[i] functions
                - each function C[j] has integer F[i][j] from 1...M

    i: 35000 2 1 5
    j: 30000 3 1 3 5
*/

























