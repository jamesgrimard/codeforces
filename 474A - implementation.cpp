// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

	map<char,char> m;

	char c;
	string list;

	cin >> c >> list;

	for (int i=0;i<s.size();i++) {
		if (c == 'L') {
			m[s[i]] = s[i+1];
		} else {
			if (i == 0) continue;
			m[s[i]] = s[i-1];
		}
	}
	
	for (int i=0;i<size(list);i++) {
		cout << m[list[i]];
	}

	cout << '\n';

	return 0;
}

