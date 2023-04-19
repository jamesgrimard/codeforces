// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		map<int,long long> m;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			m[x-(i+1)]++;
		}
		long long sum = 0;
		for (auto [k,v] : m) {
			sum += ((v-1LL)*(v-1LL)+(v-1LL))/2LL;
		}
		cout << sum << '\n';
	}

	return 0;
}