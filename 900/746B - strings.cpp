// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	int n; cin >> n >> s;

	string ans = "";

	for (int i = n-2; i >= 0; i -= 2) {
		ans += s[i];
	}

	if (n % 2 != 0) {
		for (int i = 0; i < n; i += 2) {
			ans += s[i];
		}
	} else {
		for (int i = 1; i < n; i += 2) {
			ans += s[i];
		}		
	}
	

	cout << ans << '\n';

	return 0;
}
