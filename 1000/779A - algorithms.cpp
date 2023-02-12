// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n ;
	map<int,int> m , mu;
	for (int i=0;i<n;i++) {
		int x ; cin >> x;
		m[x]++;
		mu[x]++;
	}
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x]++;
	}
	bool ans = 1;
	int count = 0;

	for (auto [k,v] : m) {
		if (v % 2 == 1) {
			ans = 0;
			break;
		}
		count += abs(v/2 - mu[k]);
	}
	
	(ans == 1) ? cout << count / 2 : cout << -1;

	return 0;
}



