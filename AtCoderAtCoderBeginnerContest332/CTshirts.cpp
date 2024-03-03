// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc332/tasks/abc332_c
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
vector<string> split(const string& str, const string& delim) {
  vector<string> result;
  size_t start = 0;
  for (size_t found = str.find(delim); found != string::npos; found = str.find(delim, start)) {
    if (start != found) {
      result.emplace_back(str.begin() + start, str.begin() + found);
    }
    start = found + delim.size();
  }
  if (start != str.size()) {
    result.emplace_back(str.begin() + start, str.end());
  }
  return result;      
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    // I already have 'm' plain T-shirts
    int logo = 0; // how many logo T-shirts I need to buy for sure
    // Search within the string 's' for the longest combinations of 1's and 2's
    vector<string> v = split(s, "0");
    for (string retezec : v) {
      int cur_logo = 0;
      for (char c : retezec) {
        if (c == '2') cur_logo++;
      }
      logo = std::max(logo, cur_logo);
    }
    int plain = 0;
    for (string retezec : v) {
      int cur_logo = 0;
      int cur_nologo = 0;
      for (char c : retezec) {
        if (c == '2') cur_logo++;
        if (c == '1') cur_nologo++;
      }
      int remains = logo - cur_logo;
      cur_nologo -= m;
      cur_nologo -= remains;
      if (cur_nologo > 0) {
        plain = std::max(plain, cur_nologo);
      }
    }
    cout << logo + plain << "\n";
  }
}
/* ================= Notes ================== //
   
*/
















