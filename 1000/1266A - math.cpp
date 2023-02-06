// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		bool ans = 1 , flag = 0;
		int sum = 0 , count = 0;
		for (int i=0;i<size(s);i++) {
			sum += (s[i]-'0');
			if (s[i] == '0') flag = 1;
			if ((s[i]-'0') % 2 == 0) count++;
		}
		if (sum % 3 != 0 || flag == 0 || count < 2) ans = 0;
		if ((size(s) < 3 && sum != 6) || size(s) == 1) ans = 0;
		if (sum == 0) ans = 1;
		(ans == 1) ? cout << "red\n" : cout << "cyan\n";

	}

	return 0;
}
