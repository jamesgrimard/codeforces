// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int ans = n-1;
		for (int i=0;i<n-1;i++) {
			if (s[i] == '>') {
				ans = i;
				break;
			}
		}
		for (int i=n-1;i>=1;i--) {
			if (s[i] == '<') {
				ans = min(n-i-1,ans);
				break;
			}
		}
		cout << ans << '\n';
	}

	return 0;
}