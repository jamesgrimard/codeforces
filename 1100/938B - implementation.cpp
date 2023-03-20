// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n ;
	vector<int> a(n),b(n),c(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=0;i<n;i++) {
		b[i] = a[i] - 1;
		c[i] = 1000000 - a[i];
		if (b[i] > c[i]) {
			(i == 0) ? cout << c[0] : cout << max(b[i-1],c[i]);
			break;
		}
		if (b[i] == c[i] || i == n-1) {
			cout << b[i];
			break;
		}
	}


	return 0;
		
}

