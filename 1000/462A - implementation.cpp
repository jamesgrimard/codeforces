// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	bool ans = 1;
	vector<string> a(n+2);
	for (int i=0;i<n+2;i++) a[0] += "x";
	a[n+1] = a[0];
	for (int i=1;i<=n;i++) {
		string s; cin >> s;
		s = "x" + s + "x";	
		a[i] = s;
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			
			int count = 0;
			if (a[i][j+1] == 'o') count++;
			if (a[i-1][j] == 'o') count++;
			if (a[i+1][j] == 'o') count++;
			if (a[i][j-1] == 'o') count++;
			if (count % 2 == 1) ans = 0;
			
		}
	}

	(ans == 1) ? cout << "YES" : cout << "NO";	

	return 0;
}



