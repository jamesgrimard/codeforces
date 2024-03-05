#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		int sum = 0;
		for (int i=0;i<n/2;i++) sum += (a[n-1-i] - a[i]);
		cout << sum << '\n';
	}


	return 0;
}