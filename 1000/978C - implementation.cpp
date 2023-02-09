// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long n , m; cin >> n >> m;

	vector<long long> a(n) , c(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) c[i] = a[i];
		if (i != 0) c[i] = a[i] + c[i-1];
	}
	int k = 0;
	for (int i=0;i<m;i++) {
		long long x; cin >> x;
		for (int j=k;j<n;j++) {
			k = j;
			if (x <= c[j]) {
				if (j == 0) {
					cout << 1 << " " << x << '\n';
					break;
				}
				cout << j + 1 << " " << x - c[j-1] << '\n';
				break;
			}
		}
	}



	return 0;
}



