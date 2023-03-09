// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int y,n; cin>> y >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int cnt = 0;
		for (int i=0;i<n;i++) {
			for (int j=0;j<=i;j++) {
				if (a[i] > a[j]) cnt++;
			}
		}
		cout << cnt << '\n';
	}


	return 0;
}

