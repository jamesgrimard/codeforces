// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	int k = sqrt(n);
	if (k * k >= n) {
		cout << k + k + 0;
	} else if (k * (k+1) >= n) {
		cout << k + k + 1;
	} else {
		cout << k + k + 2;
	}
	

	return 0;
}

