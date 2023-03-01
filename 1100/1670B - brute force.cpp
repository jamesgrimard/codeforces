// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		string s; cin >> s;
		int k; cin >> k;
		map<char,bool> m;
		for (int i=0;i<k;i++) {
			char x; cin >> x;
			m[x] = 1;
		}
		int mx = 0 , tally = 1;
		for (int i=0;i<n;i++) {
			if (i != 0 && m[s[i]] == 1) {
				mx = max(tally,mx);
				tally = 1;
			}
			if (i != n-1 && m[s[i+1]] == 0) tally++;
		}
		cout << mx << '\n';
	}

	return 0;
}

