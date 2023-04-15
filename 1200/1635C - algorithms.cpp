// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n),b;
		for (int i=0;i<n;i++) cin >> a[i];
		bool ans = 1;
		long long mn = a[n-2] , mx = a[n-1];
		int mni = n-2 , mxi = n-1;
		for (int i=n-3;i>=0;i--) {
			if (a[i+1] < mn) {
				mn = a[i+1];
				mni = i+1;
			}
			if (a[i+2] > mx) {
				mx = a[i+2];
				mxi = i+2;
			}
			if (mn - mx < a[i]) {
				a[i] = mn - mx;
				b.push_back(i+1);
				b.push_back(mni+1);
				b.push_back(mxi+1);
			}
			if (a[i] > a[i+1]) {
				ans = 0;
				break;
			}
		}

		for (int i=1;i<n;i++) {
			if (a[i] < a[i-1]) {
				ans = 0;
				break;
			}
		}

		if (ans == 0) {
			cout << -1 << '\n';
		} else {
			cout << b.size() / 3 << '\n';
			for (int i=0;i<b.size();i+=3) cout << b[i] << " " << b[i+1] << " " << b[i+2] << '\n';
		}
		
	}

	return 0;
}