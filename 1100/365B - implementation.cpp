// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >>n ;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	if (n <= 2) {
		cout << n;
		return 0;
	}

	int mx = 0 , tally = 2;

	for (int i=2;i<n;i++) {
		if (a[i-2]+a[i-1] == a[i]) {
			tally++;
		} else {
			mx = max(tally,mx);
			tally = 2;
		}
	}

	cout << max(tally,mx);


	return 0;
}