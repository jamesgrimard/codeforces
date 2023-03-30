// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;

	vector<int> a(5001);

	int mx = 0 , cnt = 0;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (a[x] < 2) {
			cnt++;
			a[x]++;
		}
		mx = max(x,mx);
	}

	if (a[mx] == 2) cnt--;

	cout << cnt << '\n';

	for (int i=0;i<5001;i++) {
		if (a[i] > 0) {
			cout << i << " ";
			a[i]--;
		}
	}

	for (int i=5000;i>=0;i--) {
		if (a[i] > 0 && i != mx) cout << i << " ";
	}


	return 0;
}