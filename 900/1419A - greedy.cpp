// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; string s; cin >> n >> s;

		int o = 0 , e = 0;

		for (int i=0;i<n;i++){
			if ((i+1) % 2 == 0 && (s[i] % 10) % 2 != 0) o++;
			if ((i+1) % 2 != 0 && (s[i] % 10) % 2 == 0) e++;
		}

		if (n % 2 == 0) {

			if (n/2-1 >= o) {
				cout << "2";
			} else {
				cout << "1";
			}

		} else {

			if (n/2 >= e) {
				cout << "1";
			} else {
				cout << "2";
			}
		}

		cout << '\n';
	}


	return 0;
}

