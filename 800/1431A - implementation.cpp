// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<long long> a(n);
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		sort(a.begin(),a.end());

		long long mx = 0;
		for (int i=0;i<n;i++) {
			if (a[i] * (n-i) > mx) mx = a[i] * (n - i);
		}

		cout << mx << endl;
	}

	return 0;
}