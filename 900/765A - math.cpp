// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	string s; cin >> s;

	int tally = 0 ;

	for (int i=0;i<n;i++) {
		string x; cin >> x;
		if (x.substr(0,3) == s) tally++;
	}

	if (n % 2 == 1) {
		cout << "contest";
	} else {
		cout << "home";
	}

	return 0;
}

