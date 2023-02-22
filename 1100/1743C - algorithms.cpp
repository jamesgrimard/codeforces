// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		string s; cin>>s;
		vector<int> a(n);
		long long sum = 0;
		int mn = 0;
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=n-1;i>=0;i--) {
			if (s[i] == '1' && mn == 0) {
				mn = a[i];
				sum += a[i];
				continue;
			}
			if (s[i] == '1') {
				mn = min(a[i],mn);
				sum += a[i];
			}
			if (s[i] == '0' && mn != 0) {
				if (a[i] > mn) {
					sum -= mn;
					sum += a[i];
				}
				mn = 0;
			}

		}
		cout << sum << '\n';
	}

	return 0;
}

