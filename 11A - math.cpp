// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n  , d; cin >> n >> d;

	vector<int> a(n);
	int tally = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) continue;
		if (a[i] <= a[i-1]) {
			int k = a[i-1]-a[i];
			tally+= (k/d+1);
			a[i] += ((k/d+1)*d);
		}
	}

	cout << tally;

	return 0;
}

