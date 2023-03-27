// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(3) , b(3) , r(3);

	for (int i=0;i<3;i++) {
		cin >> a[i] >> b[i];
		n -= a[i];
		r[i] = a[i];
	}

	for (int i=0;i<3;i++) {
		r[i] += min(b[i]-r[i],n);
		n -= min(b[i]-a[i],n);
	}

	for (auto v : r) cout << v << " ";



	return 0;
}

