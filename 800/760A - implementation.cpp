// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int m,d;
	cin >> m >> d;

	if (m == 2) {
		if ((d == 1) ? cout << 4 : cout << 5) exit(0);
	}

	if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
		if ((d <= 6) ? cout << 5 : cout << 6) exit(0);
	}

	if ((d <= 5) ? cout << 5 : cout << 6);
	
	return 0;
}