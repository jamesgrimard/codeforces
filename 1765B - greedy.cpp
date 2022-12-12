// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int n,k=1;
		string s;
		cin >> n >> s;
		for (int i=0;i<n-1;i++) {
			if (k == 1 && (i+1) != n-1) {
				k = 2;
				continue;
			}
			if (k == 2 && s[i+1] == s[i]) {
				k = 1;
				i++;
				continue;
			}
			cout << "NO" << endl;
			goto out;
		}
		cout << "YES" << endl;
		out: continue;
	}

	return 0;
}