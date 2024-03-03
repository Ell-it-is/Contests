
#include <bits/stdc++.h>
using ll = long long;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

int solve();

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int tt = 1;
  std::cin >> tt;
  bool lowercase = false;
  bool show_time = false;
  while (tt--) {
    auto start_time = std::chrono::high_resolution_clock::now();

    int solution = solve();
    if (solution == 1 && !lowercase) std::cout << "YES";
    if (solution == 1 && lowercase) std::cout << "Yes"; 
    if (solution == 0 && !lowercase) std::cout << "NO";
    if (solution == 0 && lowercase) std::cout << "No";
    std::cout << "\n";

    if (show_time) {
      auto end_time = std::chrono::high_resolution_clock::now();
      double time_taken = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();
      time_taken *= 1e-9;
      std::cout << "time = " << std::fixed << std::setprecision(9) << time_taken << "s" << std::endl; 
    }
  }
  
  return 0;
}

int solve() {
  
  
  return 42;
}

/* ================= Notes ================== //
   
*/


















