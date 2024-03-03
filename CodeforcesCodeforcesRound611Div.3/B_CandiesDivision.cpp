// time-limit: 2000
// problem-url: https://codeforces.com/contest/1283/problem/B
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
    int n, k;
    cin >> n >> k;
    int a = n / k;
    int sum = a * k;
    n -= a * k;
    /*for (int i = 0; i < k / 2; i++) {
      if (n) {
        sum++;
        n--;
      }
    }*/
    sum += std::min(n, k / 2);
    cout << sum << "\n";
  }
}
/* ================= Notes ================== //
   a + 1 > b when a == b
   a + 1 == b when a < b
*/
















