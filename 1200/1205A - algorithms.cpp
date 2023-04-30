// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	if (n % 2) {
		cout << "YES\n";
		for (int i=0;i<=n/2;i++) {
			cout << n * 2 - i*2 << " ";
			if (i != n/2) cout << i*2 + 1 << " ";
		}
		for (int i=0;i<=n/2;i++) {
			cout << n * 2 - 1 - i*2 << " ";
			if (i != n/2) cout << i*2 + 2 << " ";
		}
		cout << '\n';
	} else {
		cout << "NO\n";
	}


	return 0;
}