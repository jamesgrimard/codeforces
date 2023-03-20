// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		int mn = 0 , cnt = 0;
		for (int i=n-1;i>=0;i--) {
			if (a[i] < mn || i == n-1) mn = a[i];
			if (a[i] > mn) cnt++;
		}
		cout << cnt << '\n';
	}


	return 0;
}

