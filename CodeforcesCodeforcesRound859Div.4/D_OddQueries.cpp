// time-limit: 2000
// problem-url: https://codeforces.com/problemset/problem/1807/D
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


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    int odd_cnt = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2) odd_cnt++;
    }
    vector<int> p_odd(n);
    p_odd[0] = a[0] % 2 ? 1 : 0;
    for (int i = 1; i < n; i++) {
      p_odd[i] = p_odd[i - 1] + (a[i] % 2 ? 1 : 0); 
    }
    vector<int> p_even(n);
    p_even[0] = a[0] % 2 == 0 ? 1 : 0;
    for (int i = 1; i < n; i++) {
      p_even[i] = p_even[i - 1] + (a[i] % 2 == 0 ? 1 : 0);
    }
    while (q--) {
      int l, r, k;
      cin >> l >> r >> k;
      l--;
      r--;
      int odd = l == 0 ? p_odd[r] : p_odd[r] - p_odd[l - 1];
      int even = l == 0 ? p_even[r] : p_even[r] - p_even[l - 1];
      int temp_odd_cnt = odd_cnt;
      if (k % 2) {
        odd_cnt += (r - l + 1) - odd; 
      } else {
        odd_cnt -= odd;
      }
      cout << (odd_cnt % 2 ? "YES" : "NO") << "\n";
      odd_cnt = temp_odd_cnt;
    }
  }
}
/* ================= Notes ================== //
   When is sum odd?
   For any number of even numbers and odd number of odd numbers
*/


















