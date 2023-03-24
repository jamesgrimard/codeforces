// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	bool f = 1;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x % 2 == 0) {
			(f == 1) ? cout << 1 : cout << 2;
			f = ! f;
		} else {
			(f == 1) ? cout << 2 : cout << 1;
		}
		cout << '\n';
	}

	return 0;
}

