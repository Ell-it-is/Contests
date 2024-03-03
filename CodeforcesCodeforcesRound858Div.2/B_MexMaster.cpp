// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/1806/B
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
    int cnt_zero = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] == 0) cnt_zero++;
    }
    int non_zero = n - cnt_zero;
    if (non_zero == 0) {
      cout << 1 << "\n";
      continue;
    }
    if (cnt_zero == 0) {
      cout << 0 << "\n";
      continue;
    }
    if (cnt_zero - non_zero >= 2) {
      cout << 1 << "\n";
    } else {
      cout << 0 << "\n";
    }
  }
}
/* ================= Notes ================== //
   Each element of the array I calculate MEX of is the sum of pairs from array 'a'

   If there are only zeros -> the answer is 1
   If there are no zeros -> the answer is 0
   If there are 2 or more zeros than non-zero elements, then we cannot get a score of 0
   -> the answer is 1
   else {
   (# of zeros - 1) non-zero biggest numbers should be placed in between 0's
   and the rest of non-zero numbers can be next to each other
   -> the answer is 0
   }
*/


















