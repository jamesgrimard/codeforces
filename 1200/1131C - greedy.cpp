// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),o(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	int l = 0 , r = n-1;
	for (int i=0;i<n;i++) {
		if (i % 2 == 0) {
			o[l] = a[i];
			l++;
		}
		if (i % 2 == 1) {
			o[r] = a[i];
			r--;
		}
	}
	for (auto v:o) cout << v << " ";

	return 0;
}