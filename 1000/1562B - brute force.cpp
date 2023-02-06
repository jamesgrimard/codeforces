// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		for (int i=0;i<n;i++) {
			if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9') {
				cout << 1 << '\n';
				cout << s[i] << '\n';
				goto out;
			}
		}
		for (int i=0;i<n;i++) {
			for (int j=i+1;j<n;j++) {
				string k = string(1,s[i])+s[j];
				int d = stoi(k);
				for (int l=2;l<=sqrt(d);l++) {
					if (d % l == 0) {
						cout << 2 << '\n';
						cout << k << '\n';
						goto out;
					}
				}
			}
		}
		out: continue;
	}

	return 0;
}
