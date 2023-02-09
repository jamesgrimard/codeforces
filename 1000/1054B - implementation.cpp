// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int mx = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x > mx) {
			cout << i + 1 << '\n';
			return 0;
		}
		if (x == mx) mx++;
	}
	cout << -1;


	return 0;
}



