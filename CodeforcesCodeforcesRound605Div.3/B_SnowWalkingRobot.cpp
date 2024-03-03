// time-limit: 2000
// problem-url: https://codeforces.com/contest/1272/problem/B

#include <bits/stdc++.h>
using ll = long long;
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
#ifdef DEBUG
#include "../template/debug.h"
#else
#define __DEBUG__(x...)
#endif

int solve();

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  
  int tt = 1;
  std::cin >> tt;
  bool lowercase = false;
  bool show_time = true;
  
  auto start_time = std::chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    int solution = solve();
    if (solution == 1 && !lowercase) std::cout << "YES";
    if (solution == 1 && lowercase) std::cout << "Yes"; 
    if (solution == 0 && !lowercase) std::cout << "NO";
    if (solution == 0 && lowercase) std::cout << "No";
    std::cout << "\n";

    if (show_time) {
      auto end_time = std::chrono::high_resolution_clock::now();
      double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - prev_time).count();
      time_taken *= 1e-9;
    
      std::cout << "time = " << std::fixed << std::setprecision(9) << time_taken << "s" << std::endl; 
      prev_time = end_time;
    }
  }

  return 0;
}

int solve() {
  std::string s;
  std::cin >> s;
  int l = std::count(s.begin(), s.end(), 'L');
  int r = std::count(s.begin(), s.end(), 'R');
  int u = std::count(s.begin(), s.end(), 'U');
  int d = std::count(s.begin(), s.end(), 'D');
  int lr = std::min(l, r);
  int ud = std::min(u, d);
  if (lr == 0 || ud == 0) {
    if (l > 0 && r > 0) {
      std::cout << 2 << "\n";
      std::cout << "LR";
    } else if (u > 0 && d > 0) {
      std::cout << 2 << "\n";
      std::cout << "UD";
    } else {
      std::cout << 0;
    }
    return -1;
  }
  std::string ans = "";
  ans += std::string(lr, 'L');
  ans += std::string(ud, 'U');
  ans += std::string(lr, 'R');
  ans += std::string(ud, 'D');
  std::cout << (int) ans.size() << "\n";
  std::cout << ans;
  
  return 42;
}

/* ================= Notes ================== //
   
*/


















