// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s; cin >> s;
	bool ans = 0;
	int index = 0;
	for (int i=1;i<n;i++) {
		if (s[i] != s[i-1]) ans = 1;
		if (ans == 1) {
			index = i;
			break;
		}
	}
	if (ans == 1) {
		cout << "YES\n";
		cout << s[index-1] << s[index];
	} else {
		cout << "NO";
	}

	return 0;
}



