// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	swap(a[n-2],a[n-1]);
	if (a[n-3] + a[n-1] <= a[n-2]) {
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	for (int i=0;i<n;i++) cout << a[i] << " ";


	return 0;
}

