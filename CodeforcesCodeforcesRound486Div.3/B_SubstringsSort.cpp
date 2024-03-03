// time-limit: 1000
// problem-url: https://codeforces.com/contest/988/problem/B
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //


int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  //std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::vector<std::string> words(n);
    for (int i = 0; i < n; i++) std::cin >> words[i];
    std::sort(words.begin(), words.end(), [](auto &left, auto &right) {
      return (int) left.size() < (int) right.size();
    });
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
      if (words[i + 1].find(words[i]) == std::string::npos) {
        ok = false;
        break;
      }
    }
    if (ok) {
      std::cout << "YES" << "\n";
      for (int i = 0; i < n; i++) std::cout << words[i] << "\n";
    } else {
      std::cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   They must be sorted in non-descending order
*/
















