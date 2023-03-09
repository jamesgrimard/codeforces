// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int a , b ; cin >> a >> b;
		cout << min((a+b)/3,min(a,b)) << '\n';

	}

	return 0;
}

