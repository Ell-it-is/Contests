// time-limit: 1000
// problem-url: https://codeforces.com/contest/1607/problem/A
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
    string k, w;
    cin >> k >> w;
    map<char, int> key_map;
    for (int i = 0; i < 26; i++) {
      key_map[k[i]] = i; 
    }
    int time = 0;
    char last = w[0];
    for (int i = 1; i < w.size(); i++) {
      time += std::abs(key_map[last] - key_map[w[i]]);
      last = w[i];
    }
    cout << time << "\n";
  }
}
/* ================= Notes ================== //
   
*/


















