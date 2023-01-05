// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin>> n;

	vector<int> a(n);

	long long total = 0;

	for (int i=0;i<n;i++) {
		cin >> a[i];
		total += a[i];
	}

	sort(a.begin(),a.end());

	long long sum = 0;

	for (int i=n-1;i>=n/2;i--) sum += a[i];

	long long ans = (sum*sum + (total-sum)*(total-sum));

	cout << ans << '\n';

	return 0;
}

