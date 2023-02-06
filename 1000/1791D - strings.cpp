// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin >> s;
		vector<int> a(n) , b(n);
		map<char,bool> m,M;
		for (int i=0;i<n;i++) {
			if (m[s[i]] == 1) {
				a[i] = a[i-1];
			} else {
				(i == 0) ? a[i] = 1 : a[i] = a[i-1] + 1;
				m[s[i]] = 1;
			}
		}
		for (int i=n-1;i>=0;i--) {
			if (M[s[i]] == 1) {
				b[i] = b[i+1];
			} else {
				(i == n-1) ? b[i] = 1 : b[i] = b[i+1]+1;
				M[s[i]] = 1;
			}
		}
		int mx = 0;
		for (int i=0;i<n-1;i++) {
			mx = max(mx,a[i]+b[i+1]);
		}
		cout << mx << '\n';
	}

	return 0;
}