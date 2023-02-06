// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=2;i<n;i++) {
		if (a[i] == a[i-2]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES\n";

	(n % 2 == 0) ? cout << (n/2) : cout << (n/2+1);
	cout << '\n';

	for (int i=0;i<n;i+=2) cout << a[i] << " ";
	cout << '\n';
	cout << (n/2);
	cout << '\n';
	int k = 1;
	if (n%2 == 1) k++;
	for (int i=n-k;i>=0;i-=2) cout << a[i] << " ";
	cout << '\n';

	return 0;
}