// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin>>s;
		for (int i=1;i<n;i++) {
			if (s[i] > s[i-1] || s[i] == s[0]) {
				cout << s.substr(0,i);
				for (int j=i-1;j>=0;j--) cout << s[j];
				cout << '\n';
				break;
			}
			if (i == n-1) {
				cout << s.substr(0,n);
				for (int j=n-1;j>=0;j--) cout << s[j];
				cout << '\n';
				break;
			}
		}
		if (n == 1) cout << s << s << '\n';
	}	
	return 0;
}

