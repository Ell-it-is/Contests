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

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        multiset<int> mset;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mset.insert(x);
        }
        queue<int> q;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            q.push(x);
        }
        int min = *mset.begin();
        while (!q.empty()) {
            int willing = q.front();
            q.pop();
            // greatest value <= willing
            if (mset.empty()) {
                cout << -1 << '\n';
            } else {
                auto it = mset.lower_bound(willing);
                if (it == mset.end()) {
                    auto it2 = mset.end();
                    std::advance(it2, -1);
                    cout << *it2 << '\n';
                    mset.erase(it2);
                } else if (it == mset.begin()) {
                    if (*it == willing) {
                        cout << *it << '\n';
                        mset.erase(it);
                    } else {
                        cout << -1 << '\n';
                    }
                } else if (*it == willing) {
                    // give him the most expensive ticket he is willing to pay for
                    cout << *it << '\n';
                    // sell the ticket
                    mset.erase(it);
                } else if (*it > willing) {
                    // look for most expensive available ticket he can afford
                    std::advance(it, -1);
                    cout << *it << '\n';
                    // sell the ticket
                    mset.erase(it);
                }
            }
        }
    }
}
// ================= Notes ================= //
/*
 *
 */

























