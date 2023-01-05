// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >>tt;

	while(tt--) {

		int a,b,n; cin >> a >> b >> n;

		int c = a ^ b;

		if (n % 3 == 0) {
			cout << a;
		} else if (n%3 == 1) {
			cout << b;
		} else {
			cout << c;
		}
		cout << '\n';
	}


	return 0;
}

