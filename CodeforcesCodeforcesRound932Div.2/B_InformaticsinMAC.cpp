// time-limit: 1000
// problem-url: https://codeforces.com/contest/1935/problem/B

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
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> left(n); // mex from left
    int mex = 0;
    std::set<int> set;
    for (int i = 0; i < n; i++) {
      set.insert(a[i]);
      if (a[i] == mex) {
        while (set.count(mex)) mex++;
      }
      left[i] = mex;
    }

    vector<int> right(n);
    mex = 0;
    set.clear();
    for (int i = n - 1; i >= 0; i--) {
      set.insert(a[i]);
      if (a[i] == mex) {
        while (set.count(mex)) mex++;
      }
      right[i] = mex;
    }

    //__DEBUG__(left);
    //__DEBUG__(right);
    int part = -1;
    for (int i = 0; i < n - 1; i++) {
      if (left[i] == right[i + 1]) {
        part = i;
        break;
      }
    }
    if (part == -1) {
      for (int i = n - 1; i > 0; i--) {
        if (right[i] == left[i - 1]) {
          part = i;
          break;
        }
      } 
    }

    if (part == -1) {
      cout << -1 << "\n";
    } else {
      cout << 2 << "\n";
      cout << 1 << " " << part + 1 << "\n";
      cout << part + 2 << " " << n << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
