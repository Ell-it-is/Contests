#include "../template/template_functions.hpp"

int solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt = 1;
  //std::cin >> tt;
  bool lowercase = false;
  bool show_time = true;
  
  auto start_time = chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    int solution = solve();
    if (solution == 1) std::cout << (lowercase ? "Yes" : "YES");
    if (solution == 0) std::cout << (lowercase ? "No" : "NO");
    std::cout << "\n";
    
    if (show_time) {
      auto end_time = chrono::high_resolution_clock::now();
      double time_taken = chrono::duration_cast<std::chrono::nanoseconds>(end_time - prev_time).count();
      time_taken *= 1e-9;
    
      cout << "time = " << fixed << setprecision(9) << time_taken << "s" << std::endl;
      prev_time = end_time;
    }
  }

  return 0;
}


int solve() {
  
  
  return solved;
}

/* ================= Notes ================== //

*/


















