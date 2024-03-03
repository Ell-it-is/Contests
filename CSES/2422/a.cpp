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
const double PI = 3.14159265359;

// ================= Order ================= //

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        ll lo = 1;
        ll hi = n * n;
        while (lo < hi) {
            ll mid = lo + (hi - lo) / 2;
            ll leq = 0;
            for (int i = 1; i <= n; i++) {
                leq += std::min(n, mid / i);
            }
            if (leq >= (n * n + 1) / 2) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
        cout << hi << '\n';
    }
}
// ================= Notes ================= //
/*
    1   2   3   4   5   min(x, n)     numbers <= x  13 / 1 = 13 or 5
    2   4   6   8   10  min(x / 2, n) numbers <= x  13 / 2 = 6 or 5
    3   6   9   12  15  min(x / 3, n) numbers <= x  13 / 3 = 4
    4   8   12  16  20  min(x / 4, n) numbers <= x  13 / 4 = 3
    5   10  15  20  25  min(x / 5, n) numbers <= x  13 / 5 = 2
                                                    leq(sum) = 5 + 5 + 4 + 3 + 2 = 19
    Properties of such table:
    - Each consequent row after the first row contains (n - 1) multiples of value in each column
    - for any element in a table a[i], a[i] = row * col    
    
    Explanations:
    Why min(n, x / i)?
    n - size
    x - current value
    i - current row
    - General formula to find how many elements in 'i' <= 'x', since we know that (x / i) gives us
      the column for 'x', we know that values for columns > (x / i) are bigger AND that values for
      columns < (x / i) are smaller -> we know all values till (x / i) columns are <= x.

    Why (x / i)?
    - Why divide current value by it's row?
    - a[i] = row * col
    - a[i] / row = col
    - Because if we know at which row the value 'x' is, we also know it's column -> that gives us
      the number of columns for current row where values are <= x.

    Why min with n?
    - Because (x / i) may overflow past the boundaries of our n * n table.
    - if we ask for column of too big number: (x / i) -> (15 / 2) = 7 but our table is only 5x5,
      there is no column number 7, therefore we can say the value 15 at row 2 is greater than all
      5 values.
*/

























