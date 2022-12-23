// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n);

		for (int i=0;i<n;i++) {
			cin >> a[i];
		}

		int i1 = 0, i2 = 0, i3 = 0;

		for (int i=1;i<n-1;i++) {

			i1 = 0; i2 = i; i3 = 0;
			
			for (int j=i-1;j>=0;j--) if (a[j] < a[i]) i1 = j;

			for (int j=i+1;j<n;j++) if (a[j] < a[i]) i3 = j;

			if (a[i1] < a[i2] && a[i3] < a[i2] && i3 != 0) break;

		}

		if (a[i1] < a[i2] && a[i3] < a[i2] && i3 != 0) {
			cout << "YES" << '\n';
			cout << (i1+1) << " " << (i2+1) << " " << (i3+1);
		} else {
			cout << "NO";
		}

		cout << '\n';
	}

	return 0;
}
