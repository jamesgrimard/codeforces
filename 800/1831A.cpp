#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			cout << n + 1 - x << " ";
		}
		cout << '\n';
	}


	return 0;
}