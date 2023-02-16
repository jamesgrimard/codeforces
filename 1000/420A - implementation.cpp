// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	bool ans = 1;
	string s; cin >> s;
	map<char,bool> m;
	m['A'] = 1 , m['H'] = 1 , m['I'] = 1 , m['M'] = 1 , m['O'] = 1 , m['T'] = 1 , m['U'] = 1 , m['V'] = 1;
	m['W'] = 1 , m['X'] = 1 , m['Y'] = 1;
	for (int i=0;i<=size(s)/2;i++) {
		if (s[i] != s[size(s)-1-i]) ans = 0;
		if (m[s[i]] == 0 || m[s[size(s)-1-i]] == 0) ans = 0;
		if (ans == 0) break;
	}

	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



