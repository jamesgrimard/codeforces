// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i > 0) {
				int P = (a[i-1]|a[i]);
				cout << (a[i]^P) << " ";
				a[i] = P;
			} else {
				cout << 0 << " ";
			}
		}
		cout << '\n';
	}

	return 0;	
}