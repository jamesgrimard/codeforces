// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	map<char,bool> m; m['a'] = 1;m['e'] = 1;m['i'] = 1;m['o'] = 1;m['u'] = 1;m['y'] = 1;

	for (int i=0;i<size(s);i++) {
		if (m[tolower(s[i])] != 1) s[i] = tolower(s[i]);
		if (m[tolower(s[i])] == 1) {
			s.erase(i,1);
			i = max(i-2,-1);
		}
	}

	for (int i=0;i<size(s);i++) cout << "." << s[i];

	return 0;
}

