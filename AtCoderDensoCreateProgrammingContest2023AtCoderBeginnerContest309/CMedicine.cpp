// time-limit: 2000
// problem-url: https://atcoder.jp/contests/abc309/tasks/abc309_c
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

// ================= Solution ================= //
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int tt = 1;
    //cin >> tt;
    while (tt--) {
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> v(n);
    	ll sum = 0;
    	for (int i = 0; i < n; i++) {
    		int a, b;
    		cin >> a >> b;
    		v[i] = {a, b};
    		sum += b;
    	}
    	std::sort(v.begin(), v.end());
    	db(v);
    	vector<pair<ll,ll>> p(n);
    	p[0].first = v[0].first;
    	p[0].second = sum;
    	for (int i = 1; i < (int)v.size(); i++) {
    		p[i].first = v[i].first;
    		p[i].second = p[i - 1].second - v[i - 1].second; 
    	}
    	db(p);
    	ll ans = 0;
    	if (p[0].second <= k) {
    		ans = 1;
    	} else {
    		for (int i = 1; i < (int)p.size(); i++) {
    			if (p[i].second <= k) {
    				ans = p[i - 1].first + 1;
    				break;
    			}
    		}	
    	}
    	if (ans == 0) {
    		ans = p.back().first + 1;
    	}
    	cout << ans << '\n';
    }
}
// ================= Notes ================= //
/*
 *
 */

























