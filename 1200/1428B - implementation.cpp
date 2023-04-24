// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		s += s[0];
		bool f = 1;
		char c = '0';
		for (int i=0;i<n;i++) {
			if (c == '0' && s[i] != '-') c = s[i];
			if (s[i] != '-' && s[i] != c) f = 0;
		}
		int cnt = n;
		for (int i=0;i<n;i++) {
			if (s[i] == '-' || s[i+1] == '-') continue;
			if ((s[i] != s[i+1]) || (s[i] == s[i+1] && f == 0)) cnt--;
		}
		cout << cnt << '\n';
	}

	return 0;
}