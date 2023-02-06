// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		vector<int> a(n);
		for (int i=0;i<n;i++){
			cin >> a[i];
		}
		bool ans = true;
		for (int i = 1 ; i < n ; i++) {
			if ((a[i] - a[i-1]) % 2 != 0) {
				ans = false;
			} 
		}
		(ans == true) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}

	return 0;
}