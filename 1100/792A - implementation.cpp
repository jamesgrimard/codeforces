// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	int mn = 0 , cnt = 0;
	for (int i=1;i<n;i++) {
		if (a[i] - a[i-1] < mn || i == 1) {
			mn = a[i] - a[i-1];
			cnt = 1;
		} else if (a[i] - a[i-1] == mn) {
			cnt++;
		}
	}

	cout << mn << " " << cnt;


	return 0;
}

