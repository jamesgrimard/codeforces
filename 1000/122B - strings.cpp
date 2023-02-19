// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s; cin >> s;
	int sev = 0 , fr = 0;
	for (int i=0;i<size(s);i++) {
		if (s[i] == '4') fr++;
		if (s[i] == '7') sev++;
	}

	if (sev == fr && sev > 0) {
		cout << 4;
	} else if (sev > fr && sev > 0) {
		cout << 7;
	} else if (fr > sev && fr > 0) {
		cout << 4;
	} else {
		cout << -1;
	}

	return 0;
}



