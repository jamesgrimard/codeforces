// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		string s; cin >> s;

		if (s[0] == s[size(s)-1]) {
			cout << "NO";
		} else {
			int sum = 0 , sum2 = 0;
			bool neg = false , neg2 = false;
			for (int i=0;i<size(s);i++) {
				if (s[i] == s[0]) {
					sum++; sum2++;
				} else if (s[i] == s[size(s)-1]) {
					sum--; sum2--;
				} else {
					sum--; sum2++;
				}
				if (sum < 0) neg = true;
				if (sum2 < 0) neg2 = true;
			}
			if ((sum == 0 && neg == false) || (sum2 == 0 && neg2 == false)) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}

		cout << '\n';

	}

	return 0;
}

