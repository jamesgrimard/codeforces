// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	map<int,int> m;
	for (int i=0;i<tt;i++){
		int n; cin >> n;
		for (int j=0;j<n;j++) {
			int x; cin >> x;
			m[x]++;
		}
	}

	for (auto [k,_] : m) {
		if (m[k] == tt) cout << k << ' ';
	}

	cout << endl;

	return 0;
}