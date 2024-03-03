// time-limit: 2000
// problem-url: https://codeforces.com/contest/1324/problem/B
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    std::map<int, vector<int>> map;
    for (int i = 0; i < n; i++) {
      map[a[i]].push_back(i);
    }
    bool ans = false;
    for (auto&& [num, pos] : map) {
      if ((int) pos.size() > 1) {
        // greatest distance must be in pair of first and last position I found
        int dist = pos.back() - pos.front();
        if (dist > 1) {
          ans = true;
          break;
        }
      }
    }
    cout << (ans ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   atleast one such |subsequence| >= 3 that is a palindrome
   -> yes

   That is find a triplet {a, b, c} where
   a == c, b is irrelevant
   This means, if there are any 2 equal values with distance of more than 1
   -> print yes
*/
















