// time-limit: 3000
// problem-url: https://codeforces.com/contest/1912/problem/L
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
  int n;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  std::vector<std::pair<int, int>> psum(n);
  psum[0] = { s[0] == 'L', s[0] == 'O' };
  for (int i = 1; i < n; i++) {
    psum[i].first = psum[i - 1].first + (s[i] == 'L');
    psum[i].second = psum[i - 1].second + (s[i] == 'O');
  }
  int took = -1;
  for (int i = 0; i <= n - 2; i++) {
    auto t = psum[i];
    std::pair<int, int> r = { psum[n - 1].first - psum[i].first, psum[n - 1].second - psum[i].second };
    if (abs(t.first - r.first) >= 1 && abs(t.second - r.second) >= 1) {
      took = i + 1;
      break;
    }
  }
  std::cout << took << "\n";
}
/* ================= Notes ================== //
   
*/
















