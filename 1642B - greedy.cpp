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
			m[x]++;
		}
		int k = m.size();
		for (int i=1;i<=n;i++) cout << max(i,k) << " ";
		cout << '\n';
	}

	return 0;
}

