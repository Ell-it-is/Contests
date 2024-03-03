// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc324/tasks/abc324_c
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
    string t;
    cin >> t;
    std::map<char, int> map;
    for (int i = 0; i < t.size(); i++) {
      map[t[i]]++;
    }
    vector<int> ans;
    for (int q = 1; q <= n; q++) {
      string s;
      cin >> s;
      std::map<char, int> map2;
      for (int i = 0; i < s.size(); i++) {
        map2[s[i]]++;
      }
      if (std::abs(t.size() - s.size()) <= 1) {
        if (t.size() != s.size()) {
          // there has been insertion or deletion
          if (t.size() > s.size()) {
            // there has been deletion
            for (auto&& [letter, cnt] : map) {
              if (map2.find(letter) == map2.end()) {
                
              }
            }
          } else {
            // there has been insertion
          
          }
        } else {
          // there might have been a change
        
        } 
      }
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << "\n";
  }
}
/* ================= Notes ================== //
   options: none/add/delete/change
*/


















