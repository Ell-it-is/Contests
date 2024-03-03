// time-limit: 1000
// problem-url: https://codeforces.com/contest/1915/problem/D
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
    string word;
    cin >> word;
    vector<string> ans;
    int i = n - 1;
    while (i >= 1) {
      string cur = "";
      if (word[i] == 'a' || word[i] == 'e') {
        cur += word[i - 1];
        cur += word[i];
        i -= 2;
      } else {
        cur += word[i - 2];
        cur += word[i - 1];
        cur += word[i];
        i -= 3;
      }
      ans.push_back(cur);
    }
    std::reverse(ans.begin(), ans.end());
    for (int j = 0; j < (int) ans.size(); j++) {
      cout << ans[j];
      if (j < (int) ans.size() - 1) cout << ".";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   each new split always must start with either 'b', 'c', or 'd'
*/
















