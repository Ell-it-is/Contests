// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/1623
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
string s;
vector<string> perms;
int char_count[26];

void search(const string &curr = "") {
  if (curr.size() == s.size()) {
    perms.push_back(curr);
    return;
  }
  for (int i = 0; i < 26; i++) {
    if (char_count[i] > 0) {
      char_count[i]--;
      search(curr + (char)('a' + i));
      char_count[i]++;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    cin >> s;
    for (char c : s) {
      char_count[c - 'a']++;
    }
    search();
    cout << perms.size() << "\n";
    std::sort(perms.begin(), perms.end());
    for (const string &perm : perms) {
      cout << perm << "\n";
    }
  }
}
/* ================= Notes ================== //
   
*/


















