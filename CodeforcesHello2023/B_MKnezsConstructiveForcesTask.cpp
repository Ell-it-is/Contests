// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1779/B
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
    if (n % 2 == 0) {
      cout << "YES" << "\n";
      bool change = true;
      for (int i = 0; i < n; i++) {
        cout << (change ? 1 : -1) << " ";
        change = !change;
      }
      cout << "\n";
    } else {
      if (n == 3) {
        cout << "NO" << "\n";
      } else {
        cout << "YES" << "\n";
        int sum = n;
        bool change = true;
        for (int i = 0; i < n; i++) {
          cout << (change ? sum : -2 * sum) << " ";
          change = !change;
        }
        cout << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   even:
   1 -1 1 -1 ...
 
   odd:
   3a + 2b = sum
   a + b = sum
   ->
   a = sum - b
   3(sum - b) + 2b = sum
   3sum - 3b + 2b = sum
   2sum = b
   ->
   a = -sum
 
   5 -10 5 -10 5
*/
 

















