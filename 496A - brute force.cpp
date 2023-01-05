// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	int min_b = 0 , max_a = 0;

	for (int i=1;i<n;i++) {
		if (i > 1) {
			if (a[i]-a[i-2] < min_b || i == 2) min_b = a[i]-a[i-2];
		}
		if (a[i]-a[i-1] > max_a) max_a = a[i] - a[i-1];
	}

	cout << max(min_b,max_a);

	return 0;
}

