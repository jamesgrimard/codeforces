// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		map<int,int> m;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x % k]++;
		}
		for (auto [K,v] : m) {
			if (v == 0) continue;
			if (K == 0 || K*2 == k) {
				cnt++;
				m[K] = 0;
			} else {
				if (m[K] > m[k-K]) {
					m[K] -= (m[k-K] + 1);
					cnt += (1+m[K]);
				} else if (m[K] < m[k-K]) {
					m[k-K] -= (m[K] + 1);
					cnt += (1+m[k-K]);
				} else {
					cnt++;
				}
				m[k-K] = 0;
				m[K] = 0;
			}
		}
		cout << cnt << '\n';
	}

	return 0;
}