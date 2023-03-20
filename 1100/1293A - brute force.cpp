// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--){ 
		int n, s, k; cin >> n >> s >> k;

		vector<int> a(k);
		map<int,bool> m;

		for (int i=0;i<k;i++) {
			cin >> a[i];
			m[a[i]] = 1;
		}

		int cnt = 0;

		while (1) {
			if (m[s+cnt] == 0 && s+cnt <= n) {
				cout << cnt << '\n';
				break;
			}
			if (m[s-cnt] == 0 && s-cnt > 0) {
				cout << cnt << '\n';
				break;
			}
			cnt++;
		}
						
	}

	return 0;
}

