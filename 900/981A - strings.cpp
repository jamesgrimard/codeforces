// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	bool m = 1;
	for (int i=0;i<=size(s)/2;i++) {
		if (s[i] != s[size(s)-1-i]) {
			cout << size(s); return 0;
		}
		if (i > 0 && s[i] != s[i-1]) m = 0;
		
	}

	(m == 0) ? cout << (size(s)-1) : cout << 0;
	


	return 0;
}

