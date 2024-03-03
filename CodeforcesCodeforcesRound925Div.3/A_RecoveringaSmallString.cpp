// time-limit: 1000
// problem-url: https://codeforces.com/contest/1931/problem/A
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
    bool found = false;
    for (char x = 'a'; x <= 'z'; x++) {
      for (char y = 'a'; y <= 'z'; y++) {
        for (char z = 'a'; z <= 'z'; z++) {
          int a = int(x - 'a') + 1;
          int b = int(y - 'a') + 1;
          int c = int(z - 'a') + 1;
          if (a + b + c == n && !found) {
            cout << x << y << z << "\n";
            found = true;
            break;
          }
        }
      }
    }
  }
}
/* ================= Notes ================== //
   
*/
















