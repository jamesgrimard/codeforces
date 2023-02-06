// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	string s; cin >> s;

	if (k <= n/2) {
		for (int i=0;i<k-1;i++) cout << "LEFT" << '\n';
		for (int i=0;i<n;i++) {
			cout << "PRINT " << s[i] <<'\n';
			if (i != n-1) cout << "RIGHT" << '\n';
		}
	} else {
		for (int i=0;i<n-k;i++) cout << "RIGHT" << '\n';
		for (int i=n-1;i>=0;i--) {
			cout << "PRINT " << s[i] << '\n';
			if (i != 0) cout << "LEFT" << '\n';
		}	
	}

	
	

	return 0;
}

