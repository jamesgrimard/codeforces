// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	long long mx = 0, l = 0 , r= n-1 , cntl = a[l] , cntr = a[r];
	while (l < r) {
		if (cntl > cntr) {
			r--;
			cntr += a[r];
		} else if (cntl < cntr) {
			l++;
			cntl += a[l];
		} else {
			mx = cntl;
			r-- , l++;
			cntl += a[l];
			cntr += a[r];
		}
	}

	cout << mx;

	return 0;	
}