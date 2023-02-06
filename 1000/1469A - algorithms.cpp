// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int q = 0 , sum = 0;
		bool ans = 1;
		for (int i=0;i<size(s);i++) {
			if (s[i] == '?') q++;
			if (s[i] == ')') sum--;
			if (s[i] == '(') sum++;

			if (sum < 0 && sum+q < 0) ans = 0;
		}
		if ((abs(sum)-q) % 2 != 0 || abs(sum)-q > 0 || s[size(s)-1] == '(') ans = 0;
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}
