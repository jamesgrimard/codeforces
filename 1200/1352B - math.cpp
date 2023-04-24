// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		bool ans = 1;
		if (n % k % 2 == 1) {
			if ((k - 1 + (n % k)) % 2 == 0) ans = 0;
			if (n / k == 1) ans = 0;
		}
		if (n < k) ans = 0;
		if (ans) {
			cout << "YES\n";
			for (int i=0;i<k;i++) {				
				if (n % k % 2 == 0) {
					(i < k - 1) ? cout << n / k : cout << n / k + (n % k); 
				} else {
					(i < k - 1) ? cout << n / k - 1: cout << n / k + (n % k) + (k - 1);
				}
				cout << " ";
			}
		} else {
			cout << "NO";
		}
		cout << '\n';
	}

	return 0;
}