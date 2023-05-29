// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	(n > 2) ? cout << 2 << '\n' : cout << 1 << '\n';

	for (int i=2;i<=n+1;i++) {
		bool prime = 1;
		for (int j=2;j*j<=i;j++) if (i % j == 0) prime = 0;
		prime == 1 ? cout << 1 : cout << 2;
		cout << " ";
	}
	
	return 0;	
}

		