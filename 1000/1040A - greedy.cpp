// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , w , b; cin >> n >> w >> b;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	bool ans = 1;
	int sum = 0;
	for (int i=0;i<n/2;i++) {
		if (a[i] != a[n-1-i] && a[i] != 2 && a[n-1-i] != 2) {
			ans = 0;
			break;
		}
		if (a[i] == 2 && a[n-1-i] == 2) sum += (2*min(w,b));
		if (a[i] != a[n-1-i]) {
			(a[i] == 0 || a[n-1-i] == 0) ? sum += w : sum += b;
		}
	}

	if (n % 2 == 1 && a[n/2] == 2) sum += min(b,w);	

	(ans == 1) ? cout << sum : cout << -1; 

	return 0;
}



