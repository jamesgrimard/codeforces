// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<char> a(4);
		for (int i=0;i<n;i++) {
			string s; cin >> s;
			if (i == 0) a[i] = s[1];
			if (i == 1) a[i] = s[0];
			if (i == n-2) a[2] = s[n-1];
			if (i == n-1) a[3] = s[n-2]; 
		}

		
		if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) { // all equal
			cout << 2 << '\n';
			cout << 1 << " " << 2 << '\n';
			cout << 2 << " " << 1 << '\n';
		}else if (a[0] == a[2] && a[1] == a[3]) { // 
			cout << 2 << '\n';
			cout << 1 << " " << 2 << '\n';
			cout << n << " " << n-1 << '\n';
		}else if (a[0] != a[1] && a[1] == a[3] && a[1] == a[2]) { // 
			cout << 1 << '\n';
			cout << 2 << " " << 1 << '\n';
		}else if (a[0] != a[1] && a[0] == a[3] && a[0] == a[2]) { // 
			cout << 1 << '\n';
			cout << 1 << " " << 2 << '\n';
		}else if (a[0] != a[1] && a[1] != a[3] && a[0] != a[2]) { // 
			cout << 2 << '\n';
			cout << 2 << " " << 1 << '\n';
			cout << n << " " << n-1 << '\n';
		}else if (a[0] == a[1] && a[0] == a[2] && a[3] != a[2]) { // 
			cout << 1 << '\n';
			cout << n-1 << " " << n << '\n';
		}else if (a[0] == a[1] && a[0] == a[3] && a[3] != a[2]) { // 
			cout << 1 << '\n';
			cout << n << " " << n-1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}
	return 0;
}

