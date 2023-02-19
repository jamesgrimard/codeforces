// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	map<string,bool> m;
	m["ABSINTH"] = 1, m["BEER"] = 1, m["BRANDY"] = 1, m["CHAMPAGNE"] = 1, m["GIN"] = 1, m["RUM"] = 1;
	m["SAKE"] = 1, m["TEQUILA"] = 1, m["VODKA"] = 1, m["WHISKEY"] = 1, m["WINE"] = 1;
	int sum = 0;
	for (int i=0;i<n;i++) {
		string x; cin >> x;
		if (m[x] == 1) {
			sum++; continue;
		}
		if (x[0] - '0' < 10) {
			int k = stoi(x);
			if (k < 18) sum++;
		}
	}
	cout << sum;



	return 0;
}

