// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	string s;  cin >> s;

	int count = 0 , tally =0;

	for (int i=0;i<n;i++) {
		if (s[i] == '#') {
			tally++; continue;
		}
		count = max(tally,count);
		tally = 0;
	}

	if (tally != 0 || count >= k) {
		cout << "NO";
	} else {
		cout << "YES";
	}


	return 0;
}

