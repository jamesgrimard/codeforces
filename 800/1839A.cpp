#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int ans = (n-1) / k;
		if ((n-1)%k != 0) ans++;
		cout << ans + 1 << '\n';
	}


	return 0;
}