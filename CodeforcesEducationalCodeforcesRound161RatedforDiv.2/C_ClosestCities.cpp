// time-limit: 2000
// problem-url: https://codeforces.com/contest/1922/problem/C
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
    vector<int> closest(n);
    closest[0] = 1;
    closest[n - 1] = -1;
    for (int i = 1; i < n - 1; i++) {
      int left_dist = abs(a[i] - a[i - 1]);
      int right_dist = abs(a[i] - a[i + 1]);
      closest[i] = left_dist < right_dist ? -1 : 1;
    }
    db(closest);
    vector<int> pright(n); // price to get to city[i], when walking right
    pright[0] = 0;
    for (int i = 1; i < n - 1; i++) {
      pright[i] = pright[i - 1] + (closest[i - 1] == 1 ? 1 : abs(a[i - 1] - a[i]));
    }
    pright[n - 1] = pright[n - 2] + (closest[n - 2] == 1 ? 1 : abs(a[n - 1] - a[n - 2]));
    vector<int> pleft(n);
    pleft[n - 1] = 0;
    for (int i = n - 2; i > 0; i--) {
      pleft[i] = pleft[i + 1] + (closest[i + 1] == -1 ? 1 : abs(a[i + 1] - a[i]));
    }
    pleft[0] = pleft[1] + (closest[1] == -1 ? 1 : abs(a[1] - a[0]));
    db(pright);
    db(pleft);
    int m;
    cin >> m;
    for (int query = 0; query < m; query++) {
      int x, y;
      cin >> x >> y;
      x--; y--;
      int price = 0; // min price to pay
      bool left = y < x;
      if (left) {
        price = pleft[y] - pleft[x];
      } else {
        price = pright[y] - pright[x];
      }
      cout << price << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/
















