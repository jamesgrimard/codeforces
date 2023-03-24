// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	if (n <= 2) {
		cout << 1;
	} else {
		cout << setprecision(12)<< ceil((double)n / 2.0);
	}

	return 0;
}

