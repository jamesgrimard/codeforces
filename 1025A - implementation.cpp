// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	string s; cin >> s;

	map<char,int> m;
	for (int i=0;i<size(s);i++) m[s[i]]++;

	bool ans = false;

	for (auto [_,v] : m) {
		if (v >= 2) ans = true;
	}

	(ans == true || n == 1) ? cout << "Yes" : cout << "No";

	return 0;
}

