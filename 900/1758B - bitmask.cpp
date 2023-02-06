// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		if (n % 2 == 1) {
			for (int i=0;i<n;i++) cout << 1 << " ";
		} else {
			for (int i=0;i<n-1;i++) cout << (n+1) << " ";
			cout << 1;
		}

		cout << '\n';
	}


	return 0;
}

