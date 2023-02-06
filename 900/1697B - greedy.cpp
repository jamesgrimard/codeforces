// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , p; cin >> n >> p;

	vector<long long> a(n);

	for (int i=0;i<n;i++){
		cin >> a[i];
	}

	sort(a.rbegin(),a.rend());
	a.insert(a.begin(),0);

	for (int i=1;i<=n;i++){
		a[i] += a[i-1];
	}

	while (p--) {

		int r , l; cin >> r >> l;

		cout << (a[r] - a[r-l]) << '\n';

	}

	return 0;
}
