// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		sort(rbegin(a),rend(a));
		int sum = a[n-1] , mn = a[n-1];
		for (int i=n-2;i>=0;i--) {
			mn = max(a[i] - sum,mn);
			sum += (a[i]-sum);
		}
		cout << mn << '\n';
	}

	return 0;
}
