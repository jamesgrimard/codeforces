// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),d(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i > 0) d[i] = a[i] - a[i-1];
	}
	int mx = 1 , tally = 1;
	for (int i=1;i<n;i++) {
		if (d[i] <= a[i-1]) tally++;
		if (d[i] > a[i-1] || i == n-1) {
			mx = max(mx,tally);
			tally = 1;
		}
	}
	cout << mx;

	return 0;	
}