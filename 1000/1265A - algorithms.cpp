// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		vector<char> a= {'a','b','c'};
		for (int i=1;i<size(s)-1;i++) {
			if (s[i] == '?') {
				for (int j=0;j<3;j++) {
					if (s[i-1] != a[j] && s[i+1] != a[j]) {
						s[i] = a[j]; break;
					}
				}
			}
		}
		if (s[0] == '?') {
			(s[1] == 'a') ? s[0] = 'b' : s[0] = 'a';
		}
		if (s[size(s)-1] == '?') {
			(s[size(s)-2] == 'a') ? s[size(s)-1] = 'b' : s[size(s)-1] = 'a';
		}
		bool ans = 1;
		for (int i=1;i<size(s);i++) {
			if (s[i] == s[i-1]) {
				ans = 0; break;
			}
		}
		(ans == 1) ? cout << s : cout << -1;
		cout << '\n';
	}

	return 0;
}
