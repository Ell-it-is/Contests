// time-limit: 1000
// problem-url: https://codeforces.com/contest/1896/problem/B
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ssum(n);
    ssum[n - 1] = s[n - 1] == 'B' ? 1 : 0;
    for (int i = n - 2; i >= 0; i--) {
      ssum[i] = ssum[i + 1] + (s[i] == 'B' ? 1 : 0);
    }
    vector<int> v;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'A') v.push_back(i);
    }
    int ans = (int) v.size() == 0 ? 0 : ssum[v.back()];
    bool move = ans;
    for (int i = (int) v.size() - 2; i >= 0; i--) {
      ans += ssum[v[i]] - ssum[v[i + 1]] + move;
      if (ssum[v[i]] - ssum[v[i + 1]] > 0) move = true;
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















