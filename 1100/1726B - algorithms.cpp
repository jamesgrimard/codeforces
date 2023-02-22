// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m ; cin >> n >> m;
		if (n > m || (m % 2 == 1 && n != 1 && m != n && n % 2 != 1)) {
			cout << "No\n";
			continue;
		}
		cout << "Yes\n";	
		for (int i=0;i<n;i++) {
			if (n % 2 == 0 && i == n-2) {
				cout << (m - (n-2)) / 2 << " " << (m - (n-2)) / 2;
				break;
			}
			if (n % 2 == 1 && i == n-1) {
				cout << m - (n-1);
				break;
			}
			cout << 1 << " ";
		}
				
		cout << '\n';
	}

	return 0;
}

