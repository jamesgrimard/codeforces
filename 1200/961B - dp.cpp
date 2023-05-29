// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	vector<int> a(n),b(n),r,rs(n);
	int sum = 0;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) {
		cin >> b[i];
		if (b[i] == 1) {
			sum += a[i];
		} else {
			r.push_back(i);
		}
	}
	for (int i=0;i<n;i++) {
		if (b[i] == 0) rs[i] = a[i];
		if (i > 0) rs[i] += rs[i-1];
	}
	
	int mx = 0;
	for (int i=0;i<r.size();i++) {
		if (r[i] == 0) {
			mx = max(mx,rs[min(r[i]+k-1,n-1)]);
		} else {
			mx = max(mx,rs[min(r[i]+k-1,n-1)]-rs[r[i]-1]);
		}
	}	

	cout << mx + sum;

	return 0;	
}

		