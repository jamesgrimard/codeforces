// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int last_1 = -1 , first_0 = -1;
		for (int i=0;i<size(s);i++) {
			if (s[i] == '1') last_1 = i;
			if (s[i] == '0' && first_0 == -1) first_0 = i;
		}
		if (last_1 != -1 && first_0 != -1) {
			(first_0 < last_1) ? cout << 1 : cout << first_0-last_1+1;
		} else if (last_1 == -1 && first_0 != -1) {
			cout << first_0+1;
		} else if (first_0 == -1 && last_1 != -1) {
			cout << size(s)-last_1;
		} else {
			cout << size(s);
		}
		cout << '\n';
	}


	return 0;
}

