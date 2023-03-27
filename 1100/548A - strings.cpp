// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int k; cin >> k;

	int n = s.size();

	int m = n / k;

	if (n % k != 0) {
		cout << "NO";
	} else {
		bool ans = 1;
		for (int i=0;i<n;i+=m) {
			for (int j=0;j<m/2;j++) {
				if (s[i+j] != s[(i+m)-1-j]) ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

