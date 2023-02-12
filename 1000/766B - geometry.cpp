// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	bool ans = 0;
	for (int i=0;i<n-2;i++) {
		if (a[i] + a[i+1] > a[i+2]) {
			ans = 1;
			break;
		}
	}
	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



