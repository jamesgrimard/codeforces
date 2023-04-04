// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	float n, k; cin >> n >> k;
	float total = 0 , mx = 0;
	vector<float> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		mx = max(mx,a[i]);
	}
	for (int i=0;i<n;i++) total += (mx - a[i]);
	
	if (total > k) {
		cout << -1;
	} else {
		float p = (k - total) / n;
		for (int i=0;i<n;i++) cout << setprecision(8)<< mx - a[i] + p << '\n';
	}


	return 0;
}
