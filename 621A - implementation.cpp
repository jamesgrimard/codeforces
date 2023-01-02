// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	long long sum = 0 , min = 1000000001;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		sum += x;
		if ((x & 1) == 1 && x < min) min = x;
	}

	if ((sum & 1) == 0) {
		cout << sum << '\n';
	} else {
		cout << (sum-min) << '\n';
	}

	return 0;
}

