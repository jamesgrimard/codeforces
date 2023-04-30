// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<bool> a(n);
		int cnt = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			a[i] = x % 2;
			if (a[i]) cnt++;
		}
		if (cnt < k || (cnt % 2 == 0 && k % 2 == 1) || (cnt%2==1 && k%2 == 0)) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
			for (int i=0;i<n;i++) {
				if (k > 1 && a[i] == 1) {
					cout << i + 1 << " ";
					k--;
				}
			}
			cout << n << '\n';
		}
	}

	return 0;
}