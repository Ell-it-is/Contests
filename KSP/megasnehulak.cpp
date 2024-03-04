
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define __DEBUG__(x...)
#endif
 
// ================= Solution =============== //
bool IsDesc(vector<int> &v) {
  int n = (int) v.size();
  for (int i = 0; i < n - 1; i++) {
    if (v[i] <= v[i + 1]) return false;
  }
  return true;
}

int AllSubsets(int n, int k, vector<int> &v) {
  int ans = 0;
  for (int mask = 0; mask < (1 << n); mask++) {
    vector<int> desc;
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) {
        desc.push_back(v[i]);
      }
    }
    if ((int) desc.size() == k && IsDesc(desc)) ans++;
  }
  return ans;
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n = 10;
  int k = 4;
  vector<int> a(n);
  int x = n;
  std::generate(a.begin(), a.end(), [&]{return x--;});
  /*for (int i = n - 2; i >= n - 3; i--) {
    a[i] = 1;
  } */
  int prev = 0;
  for (int i = n - 2; i >= 0; i--) {
    int ans = AllSubsets(n, k, a);
    __DEBUG__(a);
    cout << "ans: " << ans << "\n";
    if (i < n - 2) {
      cout << "diff: " << prev - ans << "\n";
      cout << "diff / remains: " << (prev - ans) / (i + 1) << "\n";
    }
    prev = ans;
    a[i] = 1;
  }
}
/* ================= Notes ================== //
   You need strictly descending sequence
   
   (1 * 18) + (2 * 17) + (3 * 16) + ...
   (1 * r) + (2 * r - 1) + (3 * r - 2) + ...

   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
