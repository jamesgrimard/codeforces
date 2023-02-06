// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k ; cin >> n >> k;

	if (k/n == 2) {
		cout << (n - (k%n));
	} else {
		cout << 0;
	}


	return 0;
}

