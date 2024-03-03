// time-limit: 1000
// problem-url: https://cses.fi/problemset/task/2165
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
vector<stack<int>> v(3);
void move_top (stack<int>* cur, stack<int>* to) {
  cur->pop();
  cur->pop();
  to->push(2);
  to->push(1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt = 1;
  //cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
      v[0].push(i);
    }
    int max = (int) pow(2, n) - 1; // total # of moves to do
    if (n % 2) {
      int i = 0;
      int cnt = 0; // # of moves I have done
      while (cnt < max) {
        // movement of 2 disks
        move_top(&v[i], &v[(i + 1) % 3]);
        int from = i + 1;
        i = (i + 1) % 3;
        int to = i + 1;
        int next = 6 - (from + to);
        cout << from << " " << next << "\n";
        cout << from << " " << to << "\n";
        cout << next << " " << to << "\n";
        cnt += 3;
        if (cnt >= max) break;
        // movement of great disks
        int max_idx = max_element(v.begin(), v.end(), [] (auto st1, auto st2) {
          int a = !st1.empty() ? st1.top() : 0;
          int b = !st2.empty() ? st2.top() : 0;
          return a < b;
        }) - v.begin();
        int second_idx = 0;
        for (int k = 0; k < 3; k++) {
          if (k == max_idx || k == i) continue;
          second_idx = k;
        }
        if ((int) v[second_idx].size() == 0) {
          v[second_idx].push(v[max_idx].top());
          v[max_idx].pop(); 
          cout << (max_idx + 1) << " " << (second_idx + 1) << "\n";
        } else {
          v[max_idx].push(v[second_idx].top());
          v[second_idx].pop();
          cout << (second_idx + 1) << " " << (max_idx + 1) << "\n";
        }
        cnt++;
        cout << "-------------------" << "\n";
        if (!v[0].empty()) cout << "1:" << v[0].top() << "\n";
        if (!v[1].empty()) cout << "2:" << v[1].top() << "\n";
        if (!v[2].empty()) cout << "3:" << v[2].top() << "\n";
        cout << "-------------------" << "\n";
      }
    } else {
      
    }
    cout << "-------------------" << "\n";
    while (!v[2].empty()) {
      cout << v[2].top() << "\n";
      v[2].pop();
    }
    cout << "-------------------" << "\n";
  }
}
/* ================= Notes ================== //
   2^n - 1 is the minimum number of moves necessary

   Algorithm:

   For the 2 smallest disks:
   'n' is odd pattern: mid -> right -> left -> mid -> ...
   'n' is even pattern: right -> mid -> left -> right -> ...

   For other disks:
   Use bigger on a place where is no disk
   OR (if there is no place with no disk)
   Use smaller on bigger
*/
















