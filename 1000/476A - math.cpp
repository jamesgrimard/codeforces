// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n>> k;

	if (n < k) {
		cout << -1;
		return 0;
	}

	int mn = n / 2 + (n % 2);

	if (mn % k == 0) {
		cout << mn;
		return 0;
	}

	mn = k - (mn % k) + mn;

	cout << mn;
	

	return 0;
}



