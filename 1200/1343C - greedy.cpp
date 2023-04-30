// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),r(n);
		for (int i=0;i<n;i++) cin >> a[i];
		r[n-1] = a[n-1];
		for (int i=n-2;i>=0;i--) {
			if (a[i+1] > 0 && a[i] > 0) {
				r[i] = max(r[i+1],a[i]);
			} else if (a[i+1] < 0 && a[i] < 0) {
				r[i] = max(r[i+1],a[i]);
			} else {
				r[i] = a[i];
			}
		}
		long long sum1 = 0 , sum2 = 0 , l1 = 0 , l2 = 0;
		bool f = 1;
		for (int i=0;i<n;i++) {
			if (f == 1 && a[i] > 0) {
				sum1 += r[i];
				l1++;
				f = 0;
			} else if (f == 0 && a[i] < 0) {
				sum1 += r[i];
				l1++;
				f = 1;
			}
		}
		f = 0;
		for (int i=0;i<n;i++) {
			if (f == 1 && a[i] > 0) {
				sum2 += r[i];
				l2++;
				f = 0;
			} else if (f == 0 && a[i] < 0) {
				sum2 += r[i];
				l2++;
				f = 1;
			}
		}
		if (l1 >= l2) {
			cout << sum1 << '\n';
		} else {
			cout << sum2 << '\n';
		}
	}

	return 0;
}