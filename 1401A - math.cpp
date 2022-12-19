// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int a,k;
		cin >> a >> k;
		
		if (k > a) {
			cout << (k - a);

		} else if (k % 2 == a % 2) {
			cout << 0;

		} else {
			cout << 1;
			
		}

		cout << '\n';
	}

	return 0;
}