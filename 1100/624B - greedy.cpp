// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	long long sum = a[n-1];
	for (int i=n-2;i>=0;i--) {
		if (a[i] >= a[i+1]) a[i] = max(a[i+1]-1,0);
		sum += a[i];
	}

	cout << sum;

	return 0;
}

