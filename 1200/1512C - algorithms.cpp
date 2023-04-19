// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int a , b; cin >> a >> b;
		string s; cin >> s;
		int n = s.size();
		for (int i=0;i<n;i++) {
			if (s[i] == '0') a--;
			if (s[i] == '1') b--;
		}
		bool ans = 1;
		for (int i=0;i<n;i++) {
			if (s[i] == '?' && s[n-1-i] == '0') {
				s[i] = '0';
				a--;
			} else if (s[i] == '?' && s[n-1-i] == '1') {
				s[i] = '1';
				b--;
			} else if (s[i] != '?' && s[i] != s[n-1-i] && s[n-1-i] != '?') {
				ans = 0;
			}
		}
		for (int i=0;i<n;i++) {
			if (i == n/2 && n % 2 == 1 && s[i] == '?') {
				if (a > b) {
					s[i] = '0';
					a--;
				} else {
					s[i] = '1';
					b--;
				}
			} else if (s[i] == '?' && s[n-1-i] == '?') {
				if (a > b) {
					s[i] = '0' , s[n-1-i] = '0';
					a -= 2;
				} else {
					s[i] = '1' , s[n-1-i] = '1';
					b -= 2;
				}
			}
		}
		if (a < 0 || b < 0 || ans == 0) {
			cout << -1 << '\n';
		} else {
			cout << s << '\n';
		}

	}


	return 0;
}