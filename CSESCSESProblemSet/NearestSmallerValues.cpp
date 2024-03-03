// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1645
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
    int n;
    cin >> n;
    stack<pair<int, int>> st;
    st.push({0, 0});
    for (int i = 1; i <= n; i++) {
      int a;
      cin >> a;
      while (!st.empty() && st.top().first >= a) {
        st.pop();
      }
      cout << st.top().second << " ";
      st.push({a, i});
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















