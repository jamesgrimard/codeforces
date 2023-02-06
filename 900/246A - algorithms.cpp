// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	/*vector<int> a(n);

	for (int i=0;i<n;i++) a[i] = n-i;

	for (int i=1;i<n-1;i++) {
		for (int j=i;j<n-1;j++) {
			if (a[j] > a[j+1]) swap(a[j],a[j+1]);
		}
	}

	for (int i=0;i<n;i++) cout << a[i] << " ";*/

	if (n == 1 || n == 2) {
		cout << -1;
	} else {
		for (int i=n;i>=1;i--) cout << i << " ";
	}


	return 0;
}

