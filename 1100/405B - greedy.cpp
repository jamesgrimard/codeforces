// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n ; cin >> n;

	string s; cin >> s;

	bool R = 0;

	int tally = 0 , cnt = 0;

	for (int i=0;i<n;i++) {
		if (s[i] == '.') tally++;
		if (s[i] == 'L') {
			if (R == 1) {
				if (tally % 2 == 1) cnt++;
				R = 0;
			}
			tally = 0;
		}
		if (s[i] == 'R') {
			if (R == 0) cnt += tally;
			tally = 0;
			R = 1;
		}
	}


	(R == 1) ? cout << cnt : cout << cnt + tally;

	return 0;
}