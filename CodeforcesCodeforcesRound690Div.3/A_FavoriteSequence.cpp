// time-limit: 2000
// problem-url: https://codeforces.com/contest/1462/problem/A
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
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    vector<int> a;
    int i = 0;
    int j = n - 1;
    while (i <= j) {
      a.push_back(b[i++]);
      a.push_back(b[j--]);
    }
    if (n % 2 == 1) a.pop_back();
    for (int num : a) {
      cout << num << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















