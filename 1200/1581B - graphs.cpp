// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long a , b , c; cin >> a >> b >> c;
		long long k = ((a-1)*(a-1)+(a-1))/2;
		bool ans = 0;
		if (b >= a - 1 && b <= k) {
			if (c - 2 >= 2 || (b == k && c - 2 >= 1) || (c - 2 == 0 && a == 1)) ans = 1;
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}


	return 0;
}