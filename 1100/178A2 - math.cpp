// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(rbegin(a),rend(a));
	int A = a[0] , B = -1;
	for (int i=1;i<n-1;i++) {
		if (gcd(a[0],a[i]) != a[i]) {
			B = a[i];
			break;
		}
	}
	if (B == -1) {
		for (int i=1;i<n;i++) {
			if (a[i] == a[i-1]) {
				B = a[i];
				break;
			}
		}
	}
	cout << A << " " << B;

	return 0;
}

