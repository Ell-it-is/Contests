#include <bits/stdc++.h>
using namespace std;

int main() {
  //freopen("milkorder.in", "r", stdin);
  //freopen("milkorder.out", "w", stdout);
  int n, m, k;
  cin >> n >> m >> k;
  std::vector<int> a(n, 0);
  std::vector<int> member(m);
  std::map<int, int> known;
  for (int i = 0; i < m; i++) {
    cin >> member[i];
    known[member[i]] = -1;
  }
  for (int i = 0; i < k; i++) {
    int c, pos;
    cin >> c >> pos;
    pos--;
    a[pos] = c;
    known[c] = pos;
  }
  for (int i = m - 1; i >= 0; i--) {
    if (known[member[i]] != -1) continue;
    if (i == m - 1) {
      for (int j = n - 1; j >= 0; j--) {
        if (a[j] == 0) {
          a[j] = member[i];
          known[member[i]] = j;
          break;
        }
      }
    } else {
      int prev_pos = known[member[i + 1]];
      for (int j = prev_pos - 1; j >= 0; j--) {
        if (a[j] == 0) {
          a[j] = member[i];
          known[member[i]] = j;
          break;
        }
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == 0 || a[i] == 1) {
      ans = i + 1;
      break;
    }
  }
  cout << ans << "\n";
}


















