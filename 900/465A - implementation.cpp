// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	string s; cin >> s;

	int tally = 0;

	for (int i=0;i<n;i++) { 
		if (s[i] == '1') {
			tally++; continue;
		}
		tally++; break;
	}

	cout << tally;

	return 0;
}