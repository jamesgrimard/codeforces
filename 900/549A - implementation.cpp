// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,M; cin >> n >> M;

	vector<string> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int tally = 0;
	for (int i=0;i<n-1;i++) {
		for (int j=0;j<M-1;j++){
			map<char,int> m; m['f'] = 0; m['a'] = 0; m['c'] = 0; m['e'] = 0;
			bool face = true;

			m[a[i][j]]++; m[a[i][j+1]]++;
			m[a[i+1][j]]++; m[a[i+1][j+1]]++;

			for (auto [k,v] : m) {
				if (v == 0) face = false;
				//cout << k << " " << v << '\n';
			}
			if (face == true) tally++;
		}
	}

	cout << tally;

	return 0;
}

