// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		map<int,int> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			int cnt = 0 , p = 1;
			while (p << 1 <= x) {
				p <<= 1;
				cnt++;
			}
			m[cnt]++;
		}
		long long sum = 0;
		for (auto [k,v]:m) {
			sum += ((long long)(v-1)*(long long)(v-1)+(long long)(v-1))/2LL;
		}
		cout << sum << '\n';
	}


	return 0;
}