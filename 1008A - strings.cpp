// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	map<char,bool> m;
	m['a'] = true; m['e'] = true ; m['i'] = true; m['o'] = true; m['u'] = true;

	for (int i=0;i<size(s)-1;i++){
		if (m[s[i]] != true && m[s[i+1]] != true && s[i] != 'n') {
			cout << "NO"; return 0;
		}
	}

	(m[s[size(s)-1]] == true || s[size(s)-1] == 'n') ? cout << "YES" : cout << "NO";

	return 0;
}

