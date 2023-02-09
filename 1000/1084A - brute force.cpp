// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	int sum = 0 , index = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		sum += a[i];
	}
	if (sum % 2 != 0) sum++;
	sum /= 2;
	int s = 0;
	for (int i=0;i<n;i++) {
		s += a[i];
		if (a[i] == s) {
			index = i;
			break;
		}
	}
	sum = 0 ;
	for (int i=1;i<n;i++) {
		sum += (abs(index-i)+i+index) * (2 * a[i]);
	}
	cout << sum;

	return 0;
}



