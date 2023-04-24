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
		sort(rbegin(a),rend(a));
		long long A = 0 , b = 0;
		for (int i=0;i<n;i++) {
			if (i % 2 == 0) {
				if (a[i] % 2 == 0) A += a[i];
			} else {
				if (a[i] % 2 == 1) b += a[i];
			}
		}
		if (A == b) {
			cout << "Tie\n";
		} else if (A > b) {
			cout << "Alice\n";
		} else {
			cout << "Bob\n";
		}
	}

	return 0;
}