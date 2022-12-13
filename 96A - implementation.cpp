// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;
	int tally = 1;
	for (int i=0;i<(size(s)-1);i++) {
		if (s[i] != s[i+1]) {
			tally = 1;
			continue;
		}
		if (s[i] == s[i+1]) {
			tally++;
		}
		if (tally == 7) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";

	return 0;
}