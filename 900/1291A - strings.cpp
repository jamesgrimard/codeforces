// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		string s; cin >> s;

		while (s[size(s)-1] % 2 == 0 && size(s) > 0) s = s.substr(0,size(s)-1);

		int sum = 0;

		for (int i=size(s)-1;i>=0;i--) sum += s[i];

		if (sum % 2 != 0) {
			for (int i=size(s)-2;i>=0;i--) {
				if (s[i] % 2 != 0) {
					sum -= s[i];
					s = s.replace(i,1,"");
					break;
				}
			}
		}

		if (size(s) <= 1 || sum % 2 != 0) {
			cout << -1 << '\n';
		} else {
			cout << s << '\n';
		}
		

	}

	return 0;
}

