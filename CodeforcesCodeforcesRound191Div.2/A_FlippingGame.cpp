// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/327/A
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
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> cnt_zero(n), cnt_one(n);
    cnt_zero[0] = a[0] == 0 ? 1 : 0;
    cnt_one[0] = a[0] == 1 ? 1 : 0;
    for (int i = 1; i < n; i++) {
      cnt_zero[i] = cnt_zero[i - 1] + (a[i] == 0 ? 1 : 0);
      cnt_one[i] = cnt_one[i - 1] + (a[i] == 1 ? 1 : 0);
    }
    db(cnt_zero);
    db(cnt_one);
    int max = 0;
    pair<int, int> ans;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        int zeros = (i == 0 ? cnt_zero[j] : cnt_zero[j] - cnt_zero[i - 1]);
        int ones = (i == 0 ? cnt_one[j] : cnt_one[j] - cnt_one[i - 1]);
        if (zeros > ones && zeros - ones > max) {
          max = zeros - ones;
          ans = {i, j};
        }
      }
    }
    db(max);
    db(ans);
    int cnt_all = std::count(a.begin(), a.end(), 1);
    if (cnt_all == n) {
      cout << n - 1 << "\n";
      continue;
    }
    int zeros = (ans.first == 0 ? cnt_zero[ans.second] : cnt_zero[ans.second] - cnt_zero[ans.first - 1]);
    int ones = (ans.first == 0 ? cnt_one[ans.second] : cnt_one[ans.second] - cnt_one[ans.first - 1]);
    cout << cnt_all + (zeros - ones) << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















