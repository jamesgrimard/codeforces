// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<vector<int>> a(4,vector<int> (4));
	bool ans = 1;
	for (int i=0;i<4;i++) {
		bool f = 0;
		int tally = 0;
		for (int j=0;j<4;j++) {
			cin >> a[i][j];
			tally += a[i][j];
			if (a[i][j] == 1 && j == 3) f= 1;
		}
		if (tally > 1 && f == 1) ans = 0;
	}

	for (int i=0;i<4;i++) {
		if (a[i][1] == 1 && a[(i+2)%4][3] == 1) ans = 0;
		if (a[i][2] == 1 && a[(i+1)%4][3] == 1) ans = 0;
		if (a[i][0] == 1 && a[(i+3)%4][3] == 1) ans = 0;
	}

	ans == 0 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		