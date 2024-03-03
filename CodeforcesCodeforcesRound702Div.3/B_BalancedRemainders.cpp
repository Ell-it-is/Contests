// time-limit: 2000
// problem-url: https://codeforces.com/contest/1490/problem/B
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
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int a, b, c;
    a = b = c = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] % 3 == 0) a++;
      if (v[i] % 3 == 1) b++;
      if (v[i] % 3 == 2) c++;
    }
    int max = n / 3;
    int cnt = 0;
    for (int k = 0; k < 2; k++) {
      if (a > max) {
        for (int i = 0; i < n; i++) {
          if (a > max && v[i] % 3 == 0) {
            v[i]++;
            a--;
            b++;
            cnt++;
          }
        } 
      }
      if (b > max) {
        for (int i = 0; i < n; i++) {
          if (b > max && v[i] % 3 == 1) {
            v[i]++;
            b--;
            c++;
            cnt++;
          }
        }
      }
      if (c > max) {
        for (int i = 0; i < n; i++) {
          if (c > max && v[i] % 3 == 2) {
            v[i]++;
            c--;
            a++;
            cnt++;
          }
        }
      } 
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















