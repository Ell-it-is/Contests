// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc216/tasks/abc216_c
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
    ll n;
    cin >> n;
    const ll len=60;
    auto a=bitset<len>(n);
    string ans(len,'B');
    for(ll i=len-1;i>=0;i--){
      if(a[i]==1){
        ans.insert(ans.size()-i,"A");
      }
    }
    cout << ans << endl;
  }
}
/* ================= Notes ================== //
   
*/


















