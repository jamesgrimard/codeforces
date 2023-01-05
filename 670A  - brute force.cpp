// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int k = n / 7 * 2 , K = k;
	if (n % 7 == 6) k++;
	K += min(n%7,2);
	if (n > 5) {
		cout << k << " " << max(2,K);
	} else {
		cout << 0 << " " << min(2,n);
	}	

	return 0;
}

