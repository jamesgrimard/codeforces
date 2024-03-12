// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	 string pi = "3141592653589793238462643383279";
	 int tt; cin >> tt;
	 while (tt--) {
		string s; cin >> s;
		int n = s.size();
		int ans = 0;
		for (int i=0;i<n;i++) {
			if (s[i] != pi[i]) break;
			ans++;
		}
		cout << ans << '\n';
	}

	return 0;
}