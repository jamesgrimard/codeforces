// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n;
	int p;
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == 0) p = (n - x + i) % n;
		if (i % 2 == 0) {
			if ((n - x + i)%n != p) ans = 0;
		} else {
			if ((x + (n-i)) % n != p) ans = 0;
		}
	}

	ans == 1 ? cout << "Yes\n" : cout << "No\n";

	return 0;
}

