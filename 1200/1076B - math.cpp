// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	if (n % 2 == 0) {
		cout << n/2;
	} else {
		for (int i=2;i<=n;i++) {
			if (n % i == 0) {
				cout << (n - i) / 2 + 1;
				break;
			}
			if (i > sqrt(n)) {
				cout << 1;
				break;
			}
		}
	}

	return 0;	
}