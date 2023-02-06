// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	bool ans = false;

	for (int i=1;i<size(s)-1;i++) {
		if (s[i-1] != '.' && s[i] != '.' && s[i+1] != '.') {
			if (s[i-1] + s[i] + s[i+1] == 198 && s[i] != s[i-1]) ans = 1;
		}
		//cout << (s[i-1] + s[i] + s[i+1]) << '\n';
	}

	(ans == 0) ? cout << "No" : cout << "Yes";

	return 0;
}

