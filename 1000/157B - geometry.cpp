// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	double sum = 0;
	vector<double> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	for (int i=0;i<n;i++) {
		(i % 2 == 0) ? sum += (3.1415926536*a[i]*a[i]) : sum -= (3.1415926536*a[i]*a[i]);
	}
	cout << sum;

	return 0;
}



