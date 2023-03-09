// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int t = 0 , m = 0;
		bool ans = 1;
		for (int i=0;i<n;i++) {
			(s[i] == 'T') ? t++ : m++;
			if (m > t) ans = 0;
		}
		t = 0 ; m = 0;
		for (int i=n-1;i>=0;i--) {
			(s[i] == 'T') ? t++ : m++;
			if (m > t) ans = 0;
		}
		(ans == 1 && m * 2 == t) ? cout << "YES\n" : cout << "NO\n";

	}

	return 0;
}

