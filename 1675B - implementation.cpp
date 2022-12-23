// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		vector<int> a(n);

		for (int i=0;i<n;i++) cin >> a[i];

		int count = 0; 
		bool ans = true;

		for (int i=n-2;i>=0;i--) {

			while (a[i] >= a[i+1]) {
				a[i] >>= 1; 	
				count++;			
				if (a[i] == a[i+1] && a[i+1] == 0) {
					ans = false; break;
				}
			}

		}

		(ans == false) ? cout << -1 : cout << count;

		cout << '\n';

	}

	return 0;
}
