#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int cntn = 0 , cntp = 0;
		for (int i=0;i<n;i++) {
			int tmp; cin >> tmp;
			(tmp < 0) ? cntn++ : cntp++;
		}
		int half = n / 2 + (n % 2);
		int ops = max(0,half-cntp);
		if ((cntn-ops) % 2 == 1) ops++;
		cout << ops << '\n';
	}

	return 0;
}