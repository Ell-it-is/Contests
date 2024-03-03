// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc219/tasks/abc219_c
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
    string x;
    cin >> x;
    std::map<char, int> map;
    for (int i = 0; i < 26; i++) {
      map[x[i]] = i;
    }
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; i++) {
      cin >> names[i];
    }
    std::sort(names.begin(), names.end(), [&] (auto &left, auto &right) {
      int min = std::min(left.size(), right.size());
      int i = 0;
      while (i < min && left[i] == right[i]) i++;
      if (i == min) return left.size() < right.size();
      return map[left[i]] < map[right[i]];
    });
    for (string name : names) {
      cout << name << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















