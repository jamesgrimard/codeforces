// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;

	vector<long long> a(n) , yx(n) , xy(n);

	for (long long i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) continue;
		yx[i] = yx[i-1] + max(a[i-1]-a[i],(long long) 0);
		xy[i] = xy[i-1] + max(a[i]-a[i-1],(long long) 0);
	}

	while (m--) {

		long long x , y; cin >> x >> y;
		x--; y--;
		
		if (x > y) {
			cout << (xy[x] - xy[y]);
		} else if (x < y) {
			cout << (yx[y] - yx[x]);
		} else {
			cout << 0;
		}

		cout << '\n';

	}


	return 0;
}

