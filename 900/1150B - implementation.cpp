// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;cin >> n;
	vector<string> a(n);
	bool ans = true;
	for (int i=0;i<n;i++) cin >> a[i];

	for (int i=1;i<n-1;i++) {
		for (int j=1;j<n-1;j++) {
			if (a[i][j-1] == '.' && a[i][j] == '.' && a[i][j+1] == '.' && a[i+1][j] == '.' && a[i-1][j] == '.') {
				a[i][j-1] = '#'; a[i][j] = '#'; a[i][j+1] = '#'; a[i+1][j] = '#'; a[i-1][j] = '#'; 
			}
		}
	}

	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (a[i][j] == '.') ans = 0;
		}
	}
	
	(ans == 0) ? cout << "NO" : cout << "YES";

	return 0;
}

