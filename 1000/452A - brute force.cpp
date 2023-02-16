// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<string> a = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

	int n ; cin >> n;
	string s; cin >> s;

	for (int i=0;i<size(a);i++) {
		if (size(a[i]) == size(s)) {
			bool ans = 1;
			for (int j=0;j<n;j++) {
				if (s[j] == '.') continue;
				if (s[j] != a[i][j]) ans = 0;
			}
			if (ans == 1) {
				cout << a[i];
				return 0;
			}
		}
	}

	return 0;
}



