// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	bool f = 0 , F = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (a[i] % 2 == 1) f = 1;
		if (a[i] % 2 == 0) F = 1;
	}
	if (F == 1 && f == 1) {
		sort(begin(a),end(a));
	}
	for (auto v:a) cout << v << " ";
	cout << '\n';

	return 0;
}