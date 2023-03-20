// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int n = size(s);
		string S;
		for (int i=1;i<n;i++) {
			if (s[i] != s[i-1]) S = s.substr(i-1,2);
		}
		if (S == "") cout << s;
		for (int i=0;i<n;i++) cout << S;
		cout << '\n';
	}


	return 0;
}

