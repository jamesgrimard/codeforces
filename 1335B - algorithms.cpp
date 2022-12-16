// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		int a,b,c;
		cin >> a >> b >> c;

		for (int j=0;j<a;j++){
			cout << (char(97 + (j % c)));
		}

		cout << '\n';

	}

	return 0;
}

