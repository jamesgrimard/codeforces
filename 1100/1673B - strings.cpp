// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		map<char,bool> m;
		int k = 0;
		bool ans = 1 , f = 0;
		for(int i=0;i<size(s);i++) {
			if (f == 0 && m[s[i]] == 0) {
				m[s[i]] = 1;
				continue;
			}
			if (m[s[i]] == 1 && f == 0) {
				f = 1;
				k = i;
			}
			if (s[i%k] != s[i]) {
				ans = 0;
				break;
			}
		}
		(ans == 0) ? cout << "NO\n" : cout << "YES\n";
	}

	return 0;
}

