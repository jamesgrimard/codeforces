// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int a , b; cin >> a >> b;
		(a < b && (a == 1 || a == 3 || (a == 2 && b != 3))) ? cout << "NO\n" : cout << "YES\n";
	}


	return 0;
}
