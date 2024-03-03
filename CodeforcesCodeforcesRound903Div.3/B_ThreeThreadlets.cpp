// time-limit: 2000
// problem-url: https://codeforces.com/contest/1881/problem/B
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
bool cut_in_half(int x, int min, int &counter) {
  if (x < min) return false;
  if (x == min) return true;;
  if (x % 2 == 0) {
    counter++;
    cut_in_half(x / 2, min, counter);
    cut_in_half(x / 2, min, counter);  
  } else {
    counter++;
    cut_in_half(x / 2, min, counter);
    cut_in_half(x / 2 + 1, min, counter);
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  cin >> tt;
  while (tt--) {
    int a, b, c;
    cin >> a >> b >> c;
    int min = std::min({a, b, c});
    vector<int> v;
    if (a != min) v.push_back(a);
    if (b != min) v.push_back(b);
    if (c != min) v.push_back(c);
    int n = (int) v.size();
    int cnt = 0;
    bool equal = true;
    for (int i = 0; i < n; i++) {
      if (!cut_in_half(v[i], min, cnt)) equal = false; 
    }
    db(v);
    db(cnt);
    if (cnt <= 3 && equal) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















