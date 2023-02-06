// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);

	long long total = 0;

	for (int i=0;i<n;i++) {
		cin >> a[i]; total += a[i];
	}

	sort(begin(a),end(a));

	int m; cin >> m;

	for (int i=0;i<m;i++) {
		int x; cin >> x;
		cout << (total - a[n-x]) << '\n';
	}

	



	return 0;
}

