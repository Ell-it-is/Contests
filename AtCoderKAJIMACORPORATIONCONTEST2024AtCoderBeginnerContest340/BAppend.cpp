// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc340/tasks/abc340_b
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
  //cin >> tt;
  while (tt--) {
    vector<int> v;
    int q;
    cin >> q;
    for (int qq = 0; qq < q; qq++) {
      int task;
      cin >> task;
      int num;
      cin >> num;
      if (task == 1) {
        v.push_back(num);
      } else {
        // task is 2
        int n = (int) v.size();
        cout << v[n - num] << "\n";
      }
    }
  }
}
/* ================= Notes ================== //
   
*/
















