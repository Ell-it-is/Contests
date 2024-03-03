// time-limit: 1000
// problem-url: https://codeforces.com/contest/1905/problem/B
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
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    int a, b;
    vector<int> freq(n + 1);
    for (int i = 0; i < n - 1; i++) {
      cin >> a >> b;
      freq[a]++;
      freq[b]++;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt += (freq[i + 1] == 1);
    }
    cout << (cnt + 1) / 2 << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















