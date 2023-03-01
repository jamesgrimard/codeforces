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
		sort(begin(a),end(a));
		bool ans = 1;
		if (n%2 == 1) ans = 0; 
		for (int i=1;i<n/2;i++) if (a[i] == a[i+n/2-1]) ans = 0;
		if (ans == 0) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		for (int i=0;i<n/2;i++) cout << a[i] << " " << a[n/2+i] << " ";
		cout << '\n';
	}

	return 0;
}

