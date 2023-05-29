// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	vector<int> a(101),r(n);
	for (int i=0;i<n;i++) {
		cin >> r[i];
		a[r[i]]++;
	}
	sort(begin(r),end(r));
	for (int i=1;i<=101;i++) a[i] += a[i-1];

	int mx = 0;
	for (int i=1;i<=100;i++) {
		mx = max(mx,a[min(i+k,100)]-a[i-1]);
	}
	cout << n - mx;

	return 0;	
}

		