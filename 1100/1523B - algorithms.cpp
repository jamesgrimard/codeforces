// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		cout << n/2*6 << '\n';
		for (int i=1;i<n;i+=2) {
			for (int j=0;j<6;j++) {
				(j % 2 == 0) ? cout << 1 << " " : cout << 2 << " ";
				cout << i << " " << i+1 << '\n';
			}
		}
	}

	return 0;
}

