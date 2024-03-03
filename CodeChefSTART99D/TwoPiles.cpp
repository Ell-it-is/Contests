// time-limit: 1000
// problem-url: https://www.codechef.com/START99D/problems/SPLITMIN
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
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v[i] = {x, y};
        }
        int max = INT_MIN;
        vector<int> mins;
        for (int i = 0; i < n; i++) {
            int min = std::min(v[i].first, v[i].second);
            mins.push_back(min);
        }
        for (int i = 0; i < (int)mins.size(); i++) {
            max = std::max(max, mins[i]);
        }
        db(max);
        int min_diff = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (v[i].first == max || v[i].second == max) continue;
            int m = std::max(v[i].first, v[i].second);
            min_diff = std::min(min_diff, std::abs(max - m));
        }
        cout << min_diff << '\n';
    }
}
// ================= Notes ================= //
/*
    value - maximum element of a pile
    val1 - value of pile 1
    val2 - value of pile 2
    min(|val1 - val2|)
    min(|max of pile 1 - max of pile 2|)

    just choose two integers (each from different pair of course) that has the min abs diff

    each element at odd position cannot use element to the right
    each element at even position cannot use element to the left 
*/

























