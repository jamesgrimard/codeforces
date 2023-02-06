// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	vector<int> a(n);

	bool ans = 1; int mn = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) mn = a[i];
		mn = min(a[i],mn);
		if (i > 0) {
			if (a[i]%k != a[i-1]%k && a[i] != a[i-1]) ans = 0;
		}
	}
	long long sum = 0;
	for (int i=0;i<n;i++) sum += (a[i]-mn);

	(ans == 0) ? cout << -1 : cout << (sum/k);
	


	



	return 0;
}

