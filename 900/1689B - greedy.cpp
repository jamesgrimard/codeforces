// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n) , b(n);

		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=1;i<=n;i++) b[i-1] = i;

		for (int i=0;i<n-1;i++) {
			if (a[i] == b[i]) {
				swap(b[i],b[i+1]);
				i++;
			}
		}

		if (n == 1) {cout << -1 << '\n'; continue;}
		
		if (a[n-1] == b[n-1]) swap(b[n-1],b[n-2]);
		
		for (int i=0;i<n;i++) cout << b[i] << " ";

		cout << '\n';

	}

	return 0;
}

