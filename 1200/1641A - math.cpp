// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , x; cin >> n >> x;
		map<long long,long long> m;
		long long mx = 0;
		for (long long i=0;i<n;i++) {
			long long x; cin >> x;
			m[x]++;
			mx = max(x,mx);
		}
		for (auto [k,v] : m) {
			if (k*x > mx || (k*x == mx && m[mx] < 1)) break;
			long long tmp = min(v,m[k*x]);
			m[k] -= tmp;
			m[k*x] -= tmp;
		}
		long long cnt = 0;
		for (auto [k,v] : m) cnt += v;
		cout << cnt << '\n';
	}

	return 0;
}