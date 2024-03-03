// time-limit: 3000
// problem-url: https://codeforces.com/contest/1894/problem/B
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n < 3) {
      cout << -1 << "\n";
      continue;
    }
    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
      map[a[i]]++;
    }
    vector<int> ans(n, 3);
    int first_two = 0;
    for (auto&& [num, cnt] : map) {
      if (first_two == 2) break;
      if (cnt > 1) {
        bool seen = false;
        for (int i = 0; i < n; i++) {
          if (!seen && a[i] == num) {
            ans[i] = 1;
            seen = true;
          } else if (a[i] == num) {
            if (first_two == 1) {
              ans[i] = 2; 
            } else {
              ans[i] = 3;
            }
          }
        }
        first_two++;
      }
    }
    bool x = false;
    bool y = false;
    bool z = false;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (a[i] == a[j]) {
          int num1 = ans[i];
          int num2 = ans[j];
          if (num1 > num2) std::swap(num1, num2);
          if (num1 == 1 && num2 == 2) x = true;
          if (num1 == 1 && num2 == 3) y = true;
          if (num1 == 2 && num2 == 3) z = true;
        }
      }
    }
    int check = 0;
    if (x) check++;
    if (y) check++;
    if (z) check++;
    if (check == 2) {
      for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
      } 
      cout << "\n";
    } else {
      cout << -1 << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















