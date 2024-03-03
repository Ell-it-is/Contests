// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/2428
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
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll cnt = 1;
    std::map<int, int> map;
    map[a[0]]++;
    int i = 0;
    int j = 0;
    while (i <= j && j < n - 1) {
      int size = (int) map.size();
      if (size < k || map.find(a[j + 1]) != map.end()) {
        // can pick element to the right
        map[a[j + 1]]++;
        j++;
        cnt += j - i + 1;
      } else {
        map[a[i]]--;
        if (map[a[i]] == 0) {
          map.erase(a[i]);
        }
        i++;
      }
    }
    cout << (k == 1 ? n : cnt) << "\n";
  }
}
/* ================= Notes ================== //
   any subarray of size <= k has at most k distinct values
   that is n + (n - 1) + (n - 2) + ...
   
   so now it remains to look at subarrays of size > k
   it doesn't make sense to pick an element that would make your set to have a size of k + 1,
   so it also doesn't make sense to pick any bigger subsequence as it would make the situation as bad or worse (non-decreasing)
*/


















