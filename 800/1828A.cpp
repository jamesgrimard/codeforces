#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int sum = 0;
		for (int i=1;i<=n;i++) sum += i;
		int ans = 1 + (sum % n);
		cout << ans << " ";
		for (int i=2;i<=n;i++) cout << i << " ";
		cout << '\n';
	}

	return 0;
}