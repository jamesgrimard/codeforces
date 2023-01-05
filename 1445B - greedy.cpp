// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;

	while (tt--) {
		int a , b, c , d ; cin >> a >> b >> c >> d;

		cout << max(a+b,c+d) << '\n';
	}


	return 0;
}

