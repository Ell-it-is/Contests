// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/939/A

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
  bool show_time = false;

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
  
}

/* ================= Notes ================== //
   
*/


















