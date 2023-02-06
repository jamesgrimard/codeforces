// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		string s = "";

		int k = n / 2;

		if (n % 2 != 0) {
			s += '7';
			k--;
		}


		for (int i=0;i<k;i++) s += '1';

		cout << s << '\n';
	}

	return 0;
}
