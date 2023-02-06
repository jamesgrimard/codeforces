// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;

	long long sum1 = 0;
	int j = s.find('^');
	for (int i=0;i<size(s);i++) {
		if (s[i] == '^') break;
		if (s[i] != '=') sum1 += (s[i]-48)*(i-j);
	}

	for (int i=size(s)-1;i>=0;i--) {
		if (s[i] == '^') break;
		if (s[i] != '=') sum1 += (s[i]-48)*(i-j);
	}

	if (sum1 == 0) {
		cout << "balance";
	} else if (sum1 < 0) {
		cout << "left";
	} else {
		cout << "right";
	}

	return 0;
}

// lever's weight of specific point on horizontal axis is multiplied by its distance from centre point ('^')