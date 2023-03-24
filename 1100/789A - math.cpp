// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	long long sum = 0;

	for (int i=0;i<n;i++) {
		long long x; cin >> x;
		(x % k != 0) ? x = x / k + 1 : x /= k;
		sum += x;
	}

	(sum % 2 == 1) ? sum = sum / 2 + 1 : sum /= 2;

	cout << sum;

	return 0;
}

