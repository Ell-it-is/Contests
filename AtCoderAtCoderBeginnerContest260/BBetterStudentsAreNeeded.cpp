// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc260/tasks/abc260_b
// ================= Header ================= //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#ifdef DEBUG
#define db(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define db(x...)
#endif

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x);
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

const int MOD = 1000000007;
const double PI = 3.14159265359;

// ================= Order ================= //
// tc: 1
// n: 1000
// time(s): 2
// order: O(1), O(logn), O(n), O(nlogn), O(n^2)
// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
        int n,x,y,z;
        cin >> n >> x >> y >> z;
        vector<int> a(n+5),b(n+5);
        for(int i=1;i<=n;i++){cin >> a[i];}
        for(int i=1;i<=n;i++){cin >> b[i];}
        vector<bool> passed(n+5,false);
        vector<int> c;
        for(int i=1;i<=n;i++){
            c.push_back(10000*(100-a[i])+i);
        }
        sort(c.begin(),c.end());
        for(int i=0;i<x;i++){
            passed[c[i]%10000]=true;
        }
        c.clear();
        for(int i=1;i<=n;i++){
            if(!passed[i]){
                c.push_back(10000*(100-b[i])+i);
            }
        }
        sort(c.begin(),c.end());
        for(int i=0;i<y;i++){
            passed[c[i]%10000]=true;
        }
        c.clear();
        for(int i=1;i<=n;i++){
            if(!passed[i]){
                c.push_back(10000*(200-(a[i]+b[i]))+i);
            }
        }
        sort(c.begin(),c.end());
        for(int i=0;i<z;i++){
            passed[c[i]%10000]=true;
        }
        for(int i=1;i<=n;i++){
            if(passed[i]){cout << i << "\n";}
        }
        return 0;
    }
}
// ================= Notes ================= //
/*
 *
 */

























