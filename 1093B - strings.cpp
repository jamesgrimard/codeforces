// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		string s; cin >> s;

		for (int i=0;i<size(s)/2;i++){
			if (s[i] != s[size(s)-1-i]) break;
			if (s[i] == s[size(s)-1-i] && s[i+1] != s[i]) {
				swap(s[i],s[i+1]); break;
			}
			if (i == size(s)/2-1) s = "-1";
		}

		if (size(s) == 1) s = "-1";

		cout << s << '\n';

	}


	return 0;
}

