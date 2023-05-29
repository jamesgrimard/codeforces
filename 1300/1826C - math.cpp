// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		bool ans = 0;
		for (int i=2;i<=min((int)sqrt(n),m);i++) {
			if (n % i == 0) {
				ans = 1;
				break;
			}
		}
		((n <= m || ans == 1) && m > 1 && n > 1) ? cout << "NO\n" : cout << "YES\n";
	}
	

	return 0;	
}

		