// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	map<int,int> m;

	for (int i=1;i<=n;i++) m[i] = 0;

	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			int x ; cin >> x;
			if (x == 1) m[i]++;
			if (x == 2) m[j]++;
			if (x == 3) {
				m[j]++;m[i]++;
			}
		}
	}

	int total = 0;

	for (auto [k,v] : m) if (v == 0) total++;
	cout << total << '\n';
	for (auto [k,v] : m) {
		if (v==0) cout << k << " ";
	}

	return 0;
}

