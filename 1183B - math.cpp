// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while(tt--) {

		int n , k; cin >> n >> k;

		vector<int> a(n);

		int min = 0;

		for (int i=0;i<n;i++){
			cin >> a[i];
			if (i == 0 || a[i] < min) min = a[i];
		}

		min += k; bool ans = true;

		for (int i=0;i<n;i++) {
			if (abs(a[i] - min) > k) ans = false;
		}

		(ans == true) ? cout << min : cout << -1;
		cout << '\n';
	
	}

	return 0;
}

