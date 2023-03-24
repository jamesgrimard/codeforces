// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	int v = 0 , h = 0;

	for (int i=0;i<size(s);i++) {
		if (s[i] == 'D') v--;
		if (s[i] == 'U') v++;
		if (s[i] == 'R') h++;
		if (s[i] == 'L') h--;
	}

	if (size(s) % 2 == 1) {
		cout << -1;
	} else {
		cout << (abs(v) + abs(h)) / 2;
	}

	return 0;
}

