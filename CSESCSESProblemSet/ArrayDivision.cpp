// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1085
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
const ll MAX_SUM = 2e5 * 1e9;

bool check(vector<ll> &a, int k, ll max_sum) {
  int sub_cnt = 0;
  ll cur_sum = 0;
  for (int i = 0; i < (int) a.size(); i++) {
    if (a[i] > max_sum) return false;
    if (cur_sum + a[i] > max_sum) {
      sub_cnt++;
      cur_sum = 0;
    }
    cur_sum += a[i];
  }
  if (cur_sum > 0) sub_cnt++;
  return sub_cnt <= k;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll lo = 1, hi = MAX_SUM;
    ll ans = 0;
    while (lo <= hi) {
      ll mid = lo + (hi - lo) / 2;
      if (check(a, k, mid)) {
        // we can achieve max sum of value 'mid' with k or less subarrays
        // try to find smaller sum
        ans = mid;
        hi = mid - 1;
      } else {
        lo = mid + 1;
      }
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   Since only positive integers are given in the input,
   the max sum at the start is the entire array

   Seems like overlapping subproblem where I search for each subarary where to split
*/


















