// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		if (n % 2 == 1) {
			cout << n/2 << " " << n/2 << " " << 1 << '\n';
		} else {
			if ((n / 2) % 2 == 1) {
				cout << n/2-1 << " " << n/2-1 << " " << 2 << '\n';
			} else {
				cout << n/2 << " " << n/4 << " " << n/4 << '\n';	
			}
		} 
	}

	return 0;
}