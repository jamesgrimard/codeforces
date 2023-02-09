// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	int count = 0;
	for (int i=0;i<n;i++) {
		if (a[i] - count > 0 && k > 0) {
			cout << a[i] - count << '\n';
			count += (a[i]-count);
			k--;
		}
	}
	for (int i=0;i<k;i++) cout << 0 << '\n';

	return 0;
}



