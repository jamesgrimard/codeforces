// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int n = size(s);
	bool ans = 1;
	int p = 96;
	for (int i=0;i<n;i++) {
		if (int(s[i]) > p + 1) {
			ans = 0;
			break;
		}
		if (s[i] == char(p+1)) p++;
	}
	
	(ans == 1) ? cout << "YES\n" : cout << "NO\n";

	return 0;
}

