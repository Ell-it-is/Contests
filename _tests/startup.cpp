#include "../_template/template_functions.hpp"

void Solve();

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int tt = 1;
  //std::cin >> tt;
  bool show_time = false;
  
  auto start_time = chrono::high_resolution_clock::now();
  auto prev_time = start_time;
  while (tt--) {
    Solve();
    
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

void Solve() {
  int n = 20;
  int a = 0;
  int b = 1;
  Print(b);
  Repeat (n) {
    Print(a + b + 1);
    int temp = a;
    a = b;
    b = temp + b + 1;
  }
  
}



/* ================= Notes ================== //
  
*/


















