// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int a , b; cin >> a >> b;
		(gcd(a,b) == 1) ? cout << "Finite\n" : cout << "Infinite\n"; 
	}

	return 0;
}


