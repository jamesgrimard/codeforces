// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	int tally = 0;

	for (int i=0;i<size(s)-1;i++) {
		if (i == 0) {
			tally += (10-(s[size(s)-1-i]-'0'))*pow(10,i);
		} else {
			tally += (9-(s[size(s)-1-i]-'0'))*pow(10,i);
		}
	}

	cout << max(tally,1);

	return 0;
}

