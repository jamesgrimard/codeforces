// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	map<int,bool> M;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		M[a[i]] = 1;
	}
	sort(begin(a),end(a));
	int m,q;
	if ((a[0] + a[n-1]) % 2 != 0) {
		m = a[n-1] - a[0];
		if (M.size() < 3) {
			cout << m;
		} else {
			cout << -1;
		}
	} else {
		bool ans = 1;
		m = (a[0]+a[n-1]) / 2;
		q = a[n-1] - m;
		for (int i=0;i<n;i++) {
			if (abs(a[i]-m) != q && abs(a[i]-m) != 0) ans = 0;
		}
		if (ans) {
		cout << q;
		} else {
			cout << -1;
		}
	}
	

	


	return 0;
}