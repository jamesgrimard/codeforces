// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int mn = 0 , index = 0;
	for (int i=0;i<n;i++) {
		int sum = 0;
		for (int j=0;j<a[i];j++) {
			int x; cin >> x;
			sum += (5*x+15);
		}
		if (sum < mn || i == 0) mn = sum;
	}
	cout << mn;

	return 0;
}

