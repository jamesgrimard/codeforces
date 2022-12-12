// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	bitset<4> b;

	if (size(s) >= 5) b[0] = 1;

	for (char x : s) {
		if (x >= 'A' && x <= 'Z') {
			b[1] = 1;
			continue;
		}
		if (x >= '0' && x <= '9') {
			b[2] = 1;
			continue;
		}
		if (x >= 'a' && x <= 'z') {
			b[3] = 1;
		}
	}

	(b.count() == 4) ? cout << "Correct" : cout << "Too weak";
	cout << endl;

	return 0;
}