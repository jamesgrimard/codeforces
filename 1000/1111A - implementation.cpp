// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s , S; cin >> s >> S;

	if (size(s) != size(S)) {
		cout << "No";
		return 0;
	}
	bool ans = 1;
	map<char,bool> m;
	m['a'] = 1; m['e'] = 1; m['i'] = 1; m['o'] = 1; m['u'] = 1;
	for (int i=0;i<size(s);i++) {
		if (m[s[i]] != m[S[i]]) {
			//cout << m[s[i]] << " " << m[S[i]] << '\n';
			ans = 0; break;
		}
	}
	(ans == 1) ? cout << "Yes" : cout << "No";


	return 0;
}