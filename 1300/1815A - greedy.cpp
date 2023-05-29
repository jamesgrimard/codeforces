// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=n-1;i>=2;i--) {
			long long k = a[i] - a[i-1];
			if (k < 0) {
				a[i-1] += k;
				a[i-2] += k;
			}
		}
		for (int i=0;i<n-2;i++) {
			long long k = a[i] - a[i+1];
			if (k > 0) {
				a[i+1] += k;
				a[i+2] += k;
			}
		}
		bool ans = 1;
		for (int i=1;i<n;i++) if (a[i] < a[i-1]) ans = 0;

		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}


	return 0;	
}

		