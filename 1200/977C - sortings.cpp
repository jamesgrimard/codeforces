// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	
	if (k == 0 && a[0] == 1) {
		cout << -1;
	} else {
		if (k != n && a[k] == a[k-1]) {
			cout << -1;
		} else {
			(k == 0) ? cout << 1 : cout << a[k-1];
		}
	}

	return 0;	
}

		