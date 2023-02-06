// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		bool ans = 0;
		for (int i=1;i<n;i++) {
			for (int j=i+2;j<n;j++) {
				if (s.substr(j-1,2) == s.substr(i-1,2)) {
					ans = 1; goto out;
				}
			}
		}
		out: (ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}



	return 0;
}

