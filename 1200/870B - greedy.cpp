// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	int mx = 0 , mn = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) {
			mx = a[i];
			mn = a[i];
		}
		mx = max(mx,a[i]);
		mn = min(mn,a[i]);
	}

	if (k == 1) {
		cout << mn;
	} else if (k >= 3) {
		cout << mx;
	} else {
		cout << max(a[0],a[n-1]);
	}


	return 0;	
}

		