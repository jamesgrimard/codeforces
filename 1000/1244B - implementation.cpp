// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		int mx = n;
		for (int i=0;i<n;i++) {
			if (s[i] == '1') {
				mx = max(mx,max(i+1,n-i)*2);
			}
		}
		cout << mx << '\n';
	}

	return 0;
}


