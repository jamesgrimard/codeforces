// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<string> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	bool ans = 1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (a[i][j] == '#') {
				if (j == 0 || j == n-1 || i == n-1 || i == n-2) {
					ans = 0;
					break;
				} 
				if (a[i+1][j] != '#' || a[i+2][j] != '#' || a[i+1][j-1] != '#' || a[i+1][j+1] != '#') ans = 0;
				a[i][j] = '.';
				a[i+1][j] = '.';
				a[i+2][j] = '.';
				a[i+1][j-1] = '.'; a[i+1][j+1] = '.';
			}
		}
	}

	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}