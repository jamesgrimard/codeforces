// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int>a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	cout << ((n-1)/2) << '\n';
	if (n < 3) {
		for (int i=0;i<n;i++) cout << a[i] << " ";
		return 0;
	}
	cout << a[1] << " " << a[0] << " ";
	for (int i=0;i<(n-2)/2;i++) {
		cout << a[n-1-i] << " " << a[i+2] << " ";
	}
	if (n % 2 == 1) cout << a[ceil(n/2)+1];

	return 0;
}
