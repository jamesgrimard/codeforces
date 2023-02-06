// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , k;
		string s;
		cin >> n >> k >> s;

		if (k == 0) {
			cout << "YES";
		} else if (2 * k == n) {
			cout << "NO";
		} else {
			bool flag = true;
			for (int i=0;i<k;i++) {
				if (s[i] != s[n-1-i]) flag = false;
			}
			(flag == true) ? cout << "YES" : cout << "NO";
		}

		cout << '\n';
	}

	return 0;
}

