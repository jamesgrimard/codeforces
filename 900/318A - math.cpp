// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n,k;
	cin >> n >> k;

	if ((n & 1) == 0) {
		if (k <= (n/2)) {
			cout << (k + (k-1));
		} else {
			cout << (k - (n-k));
		}
	} else {
		if (k <= (n/2+1)) {
			cout << (k + (k-1));
		} else {
			cout << (k - (n-k+1));
		}
	}

	return 0;
}