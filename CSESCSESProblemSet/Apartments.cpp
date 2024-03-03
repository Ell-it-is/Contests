// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1084
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
    ll n, m, k;
    cin >> n >> m >> k;
    // the desired apartment sizes
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    // the sizes of apartments
    vector<ll> b(m);
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    ll cnt = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
      ll lo = std::max(a[i] - k, 1ll);
      ll hi = a[i] + k;
      if (lo <= b[j] && b[j] <= hi) {
		cnt++;
		i++;
		j++;
	  } else if (b[j] < lo) {
	    j++;
	  } else {
	    i++;
	  }
    }
    cout << cnt << "\n";
  }
}
/* ================= Notes ================== //
   min size of aparment is 1 (cannot get negative values using k, ofc...)  
*/


















