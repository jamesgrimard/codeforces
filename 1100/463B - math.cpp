// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(n+1);
	int energy = 0 , cost = 0;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		if (a[i] > a[i-1]) {
			cost += (a[i] - a[i-1] - min(energy,a[i]-a[i-1]));
			energy -= min(energy,a[i]-a[i-1]);
		} else {
			energy += (a[i-1] - a[i]);
		}
	}
	cout << cost;

	return 0;
}

