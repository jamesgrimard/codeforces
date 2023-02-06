// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int t; cin >> t;
	string S , s; cin >> S >> s;

	vector<vector<int>> a(12);

	int count = 5;

	for (int i=0;i<12;i++) {
		int m = 31;
		if (i == 1) m = 29;
		if (i == 8 || i == 4 || i == 5 || i == 10) m = 30; 
		a[i].resize(m);
		for (int j=0;j<m;j++) {
			a[i][j] = count%7; count++;
			if (a[i][j] == 0) a[i][j] = 7;
		}
	}

	int tally = 0;

	if (s == "month") {
		for (int i=0;i<12;i++) {
			if (size(a[i]) >= t) tally++;
		}
	} else {
		for (int i=0;i<12;i++){
			for (int j=0;j<size(a[i]);j++) {
				if (t == a[i][j]) tally++;
			}
		}
	}
	
	cout << tally;

	return 0;
}

