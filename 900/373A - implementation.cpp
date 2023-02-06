// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k; cin >> k;

	map<int,int> m;

	for (int i=0;i<4;i++) {
		string s; cin >> s;
		for (int j=0;j<4;j++) {
			if (s[j] != '.') m[s[j]]++;
		}
	}

	bool ans = 1;

	for (auto [_,v] : m) {
		if (v > k*2) ans = 0;
	}

	(ans == 1) ? cout << "YES" : cout << "NO";


	return 0;
}

