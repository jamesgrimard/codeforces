// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y,x ; cin >> y >> x;

	vector<string> a(y);

	for (int i=0;i<y;i++) cin >> a[i];

	for (int i=0;i<y;i++) {
		for (int j=0;j<x;j++) {
			if (a[i][j] == 'W') {
				if ((i < y-1 && a[i+1][j] == 'S') || (i > 0 && a[i-1][j] == 'S') || (j < x-1 && a[i][j+1] == 'S') || (j > 0 && a[i][j-1] == 'S')) {
					cout << "NO"; return 0;
				}
			}
			if (a[i][j] == 'S') {
				if (j > 0 && a[i][j-1] == '.') a[i][j-1] = 'D';
				if (j < x-1 && a[i][j+1] == '.') a[i][j+1] = 'D';
				if (i > 0 && a[i-1][j] == '.') a[i-1][j] = 'D';
				if (i < y-1 && a[i+1][j] == '.') a[i+1][j] = 'D';
			}
		}
	}

	cout << "Yes\n";

	for (int i=0;i<y;i++) {
		for (int j=0;j<x;j++) cout << a[i][j];
		cout << '\n';
	}

	return 0;
}

