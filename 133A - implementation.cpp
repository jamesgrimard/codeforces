// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;

	map<char,bool> m;
	m['H'] = true;
	m['Q'] = true;
	m['9'] = true;

	for (int i=0;i<size(s);i++){
		if (m[s[i]] == true) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

	return 0;
}