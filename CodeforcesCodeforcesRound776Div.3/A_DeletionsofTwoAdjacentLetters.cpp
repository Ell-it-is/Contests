// time-limit: 2000
// problem-url: https://codeforces.com/contest/1650/problem/A
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
    string s;
    cin >> s;
    char c;
    cin >> c;
    bool exists = false;
    for (int i = 0; i < (int) s.size(); i++) {
      if (s[i] == c && i % 2 == 0) exists = true; 
    }
    cout << (exists ? "YES" : "NO") << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















