// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a(3);
	int mx = 0;
	for (int i=0;i<3;i++) cin >> a[i];

	bool f=0;
	for (int i=0;i<3;i++) {
		if (a[i] > 0) f = 1;
		(a[i] % 2 == 0) ? a[i] /= 2 : a[i] = a[i] / 2 + 1;
		int q = i + 3 * (a[i]-1);
		mx = max(mx,q);
	}

	(f == 1) ? cout << mx + 30 : cout << 0;

	return 0;
}

