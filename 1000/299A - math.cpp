// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=1;i<n;i++) {
		if (a[i] % a[0] != 0) {
			cout << -1 ;
			return 0;
		}
	}

	cout << a[0];


	return 0;
}



