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
		int p = n / 2;
		if (n % 2 == 0) p--;
		for (int i=0;i<=n/2;i++) {
			cout << a[p+i] << " ";
			if ((n % 2 == 0 && i == n/2) || (i == 0)) continue;
			cout << a[p-i] << " ";
		}
		cout << '\n';
	}

	return 0;
}