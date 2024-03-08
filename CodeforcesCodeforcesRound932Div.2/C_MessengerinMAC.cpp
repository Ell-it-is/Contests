// time-limit: 3000
// problem-url: https://codeforces.com/contest/1935/problem/C

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
  std::cin >> tt;
  while (tt--) {
    int n;
    ll l;
    cin >> n >> l;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    vector<pair<int, int>> ans;
    ll sum = 0;
    int j = 0;
    while (j < n && sum < l) {
      ans.push_back(a[j]);
      sum += a[j].first;
      j++;
    }
    std::sort(ans.begin(), ans.end(), [](auto &left, auto &right) {
      return left.second < right.second;
    });
    int sz = (int) ans.size();
    for (int i = 0; i < sz - 1; i++) {
      sum += abs(ans[i].second - ans[i + 1].second);
    }
    
    ll temp = sum;
    // from end
    j = sz - 1;
    while (j > 0 && sum > l) {
      sum -= ans[j].first;
      sum -= abs(ans[j - 1].second - ans[j].second);
      j--;
    }
    int cnt = j + 1;
    
    sum = temp;
    // from start
    j = 0;
    while (j < (int) ans.size() - 1 && sum > l) {
      sum -= ans[j].first;
      sum -= abs(ans[j + 1].second - ans[j].second);
      j++;
    }
    cnt = max(cnt, (int) ans.size() - j);
    //__DEBUG__(j);
    //__DEBUG__(ans);
    //__DEBUG__(sum);

    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
