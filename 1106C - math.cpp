// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));

	long long total = 0;

	for (int i=0;i<n/2;i++) {
		total += ((a[i]+a[n-1-i])*(a[i]+a[n-1-i]));
	}

	cout << total;


	return 0;
}

