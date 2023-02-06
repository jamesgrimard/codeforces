// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--){
		long long a,b;
		cin >> a >> b;

		long long mx = abs(a-b);

		cout << mx << " ";

		if (a == b) {
			cout << 0;

		} else {
			cout << min((a % mx),(mx - (a % mx)));

		}

		cout << '\n';

	}

	return 0;
}