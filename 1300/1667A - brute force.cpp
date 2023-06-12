// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<long long> a(n),b(n);
	for (int i=0;i<n;i++) cin >> a[i];
	long long mn = 0;
	for (int i=0;i<n;i++) {
		long long tally = 0;
		for (int j=i;j>=0;j--) {
			if (j == i) {
				b[j] = 0;
			} else {
				tally += abs(b[j+1] / a[j] - 1LL);
				b[j] = a[j]*(b[j+1] / a[j] - 1LL);
			}
		}
		for (int j=i+1;j<n;j++) {
			if (j == i + 1) {
				b[j] = a[j];
				tally++;
			} else {
				tally += abs(b[j-1] / a[j] + 1LL);
				b[j] = a[j]*(b[j-1] / a[j] + 1LL);
			}
		}
		if (mn == 0 || tally < mn) mn = tally;
	}
	cout << mn << '\n';

	return 0;	
}