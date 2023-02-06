// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s , S;cin >> s >> S;
		bool ans = 0;
		for (int i=0;i<size(s);i++) {
			for (int j=0;j<size(S);j++) {
				if (S[j] == s[i]) {
					ans = 1; goto out;
				}
			}
		}
		out: (ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}


