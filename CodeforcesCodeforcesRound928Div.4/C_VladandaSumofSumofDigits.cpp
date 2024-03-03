// time-limit: 500
// problem-url: https://codeforces.com/contest/1926/problem/C
// ================= Header ================= //
#include <bits/stdc++.h>
typedef long long ll;
#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution =============== //
int get_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::vector<int> memo(2e5 + 1);
  for (int i = 1; i <= 2e5; i++) {
    memo[i] = memo[i - 1] + get_digits(i);
  } 
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    std::cin >> n;
    std::cout << memo[n] << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















