// time-limit: 2000
// problem-url: https://codeforces.com/contest/1870/problem/B
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    int x = a[0];
    for (int i = 1; i < n; i++) {
      x ^= a[i];
    }
    int min = x;
    int max = x;
    db(min, max);
    db(x);
    int mega_b = b[0];
    for (int i = 1; i < m; i++) {
      mega_b |= b[i];
    }
    for (int i = 0; i < n; i++) {
      a[i] |= mega_b;
    }
    x = a[0];
    for (int i = 1; i < n; i++) {
      x ^= a[i];
    }
    db(x);
    min = std::min(min, x);
    max = std::max(max, x);
    cout << min << " " << max << "\n";
  }
}
/* ================= Notes ================== //
   Operation:
   1) Choose number from array 'b'
   2) Apply binary OR on ALL elements of array 'a' with chosen number
    0...n - 1 -> a[i] = a[i] | b[j]

   The goal is to obtain the minimal and maximal possible XOR of array 'a'

   even length:
   min: make all numbers the same -> min = 0 
   max: pick the biggest number in 'b' and apply it to 'a' -> max = ? (compare with original)
   odd length:
   min: 
   max: 
    
*/


















