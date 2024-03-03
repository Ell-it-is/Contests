// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1737/A
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
int mex(vector<int> const& A) {
  set<int> b(A.begin(), A.end());

  int result = 0;
  while (b.count(result))
    ++result;
  return result;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    std::map<char, int> map;
    for (int i = 0; i < n; i++) {
      map[s[i]]++;
    }
    string ans;
    int size = n / k;
    while (k--) {
      int i = 0;
      vector<int> v {0};
      for (auto&& [key, val] : map) {
        if (i == size) break;
        if (val > 0) {
          v.push_back(key - 'a' + 1);
          val--;
          i++;
        }
      }
      int mex_ = mex(v);
      ans += char(mex_ + 'a' - 1);
    }
    cout << ans << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















