// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n ; char k; string s; cin >> n >> k >> s;
		if (k == 'g') {
			cout << 0 << '\n';continue;
		}
		int mx = 0 , count = 0;
		s += s;
		bool sp = 0;
		for (int i=0;i<n*2;i++) {
			if (s[i] == k && sp == 0) {
				count = 0; sp = 1;
				continue;
			}
			if (sp == 1) count++;
			if (s[i] == 'g') {
				mx = max(count,mx); sp = 0;
			}
		}
		cout << mx << '\n';
	}

	return 0;
}

