// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		string s;
		cin >> n >> s;

		string ans = "";
		bool sign = true;
		for (int i=1;i<n;i++) {
			if (s[i] == '1') {
				if (sign == true) {
					ans += '-';
					sign = 0;
				} else {
					ans += '+';
					sign = 1;
				}
			} else {
				ans += '+';
			}
		}
		cout << ans << '\n';
	}

	return 0;
}