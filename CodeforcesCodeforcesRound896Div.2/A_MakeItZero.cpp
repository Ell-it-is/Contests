// time-limit: 1000
// problem-url: https://codeforces.com/contest/1869/problem/A
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#include "../template/debug.h"
#else
#define db(x...)
#endif

// ================= Solution ================= //


int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n % 2 == 0) {
      cout << 2 << '\n';
      cout << 1 << " " << n << '\n';
      cout << 1 << " " << n << '\n';
    } else {
      cout << 4 << '\n';
      cout << 1 << " " << n - 1 << '\n';
      cout << 1 << " " << n - 1 << '\n';
      cout << n - 1 << " " << n << '\n';
      cout << n - 1 << " " << n << '\n';
    }
  }
}
/* ================= Notes ====================
   XOR - exactly one of two bits must be 1
   How to minimize values when using XOR operation?
   We are looking to make bits 0 when minimizing, that can be achieved by picking number whose bits equal to bits in my number
   optimal ex.: n XOR n = 0

   So I am looking to make the whole array of equal numbers of even count (if odd count of same numbers I need 2 more operations)

   After XOR of the whole array, the whole array is equal and so from that point I need either 1 or 2 more operations

   If there are even number of elements, I can just XOR the whole array twice to make all 0
   If there are odd number of elements, I can xor the even part in 2 moves to make it 0 -> 00000X
    - To get rid of the last X I need to XOR last two elements -> 0000XX
    - To get rid of the last 2 X's I need to XOR last two elements again -> 000000

   2 operations even
   4 operations odd
*/



















