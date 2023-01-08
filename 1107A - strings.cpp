// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		string s; cin >>s;

		if (s[0] < s[1] || n > 2) {
			cout << "YES\n";
			cout << 2 << '\n';
			cout << s[0] << " " << s.substr(1,n) << '\n';
			continue;
		}
		cout << "NO\n";
	}

	return 0;
}

