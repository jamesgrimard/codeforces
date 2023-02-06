// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int sum = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
	}
	for (int i=0;i<n;i++) {
		int k =0;
		if (a[i] % 2 == 0) {
			cout << (a[i]/2);
		} else if (sum > 0) {
			k = floor((float)a[i]/2.0);
			cout << k; sum--;
		} else {
			k = ceil((float)a[i]/2.0);
			cout << k; sum++;
		}
		cout << '\n';
	}
	


	return 0;
}


