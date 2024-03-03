// time-limit: 1000
// problem-url: https://codeforces.com/contest/1934/problem/B

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
  vector<int> pre(16);
  pre[1] = 1;
  
  pre[2] = 2;
  pre[3] = 1;
  
  pre[4] = 2;
  pre[5] = 3;
  pre[6] = 1;
  
  pre[7] = 2;
  pre[8] = 3;
  pre[9] = 2;
  pre[10] = 1;
  
  pre[11] = 2;
  pre[12] = 3;
  pre[13] = 2;
  pre[14] = 3;
  pre[15] = 1;
  vector<int> dp(1e9 + 1);
  for (int i = 1; i < 16; i++) {
    dp[i] = pre[i];
  }
  for (int i = 16; i <= 1e9; i++) {
    dp[i] = std::min({dp[i - 1], dp[i - 3], dp[i - 6], dp[i - 10], dp[i - 15]}) + 1;
  }
    
  int tt = 1;
  std::cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    cout << dp[n] << "\n";
  }
}
/* ================= Notes ================== //
   
*/
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
