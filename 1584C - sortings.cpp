// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {
		int n; cin >> n;
		vector<int> a(n) , b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) cin >> b[i];
		sort(begin(a),end(a)); sort(begin(b),end(b));
		bool ans = true;
		for (int i=0;i<n;i++) {
			if (a[i]-b[i] > 1 || a[i]-b[i] < -1) ans = false;
			if (a[i] > b[i]) ans = false;
		}
		(ans == true) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}


	return 0;
}

