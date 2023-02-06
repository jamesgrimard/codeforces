// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;

	map<char,int> m; m['A'] = 0; m['C'] = 0; m['G'] = 0; m['T'] = 0; m['?'] =0;
	for (int i=0;i<n;i++) m[s[i]]++;
	
	for (int i=0;i<n;i++) {
		if (s[i] == '?') {
			for (auto [k,v] : m) {
				if (k != '?' && v < n/4) {
					s[i] = k; m[k]++; m['?']--; break;
				}
			}
		}
	}

	bool ans = 1;

	for (auto [k,v] : m) {
		if ((k == '?' && v != 0) || (k != '?' && v != n/4)) ans = 0;
	}

	(ans == 1) ? cout << s : cout << "===";

	return 0;
}

