// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<string,int> m;
		for (int i=0;i<n;i++) {
			string s; cin >> s;
			m[s]++;
		}
		long long sum = 0;
		for (auto [k,v] : m) {
			long long cnt = 0;
			for (auto [K,V] : m) {
				if (k != K && V != -1) {
					if (k[0] == K[0] || k[1] == K[1]) cnt+=V;
				}
			}
			sum += cnt * v;
			m[k] = -1;
		}
		cout << sum << '\n';
	}

	return 0;
}