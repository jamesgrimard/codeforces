// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		bool ans = 1;
		for (int i=0;i<n/2;i++) {
			int k = abs(s[i]-s[n-1-i]);
			//cout << k << '\n';
			if (k != 0 && k != 2) {
				ans = 0;
				break;
			}
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}


	return 0;
}



