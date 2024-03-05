#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int mn = 0 , mx = 0; for (int i=0;i<n;i++) {
			int tmp; cin >> tmp;
			(tmp < 0) ? mn = tmp : mx = max(mx,tmp);
		}
		(mn < 0) ? cout << mn : cout << mx;
		cout << '\n';
	}


	return 0;
}