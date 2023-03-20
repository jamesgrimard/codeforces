// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	int mn = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (a[i] < mn || i == 0) mn = a[i];
	}
	bool f = 0;
	int index = 0 , d = n;
	for (int i=0;i<n;i++) {
		if (a[i] == mn && f == 0) {
			f = 1;
			index = i;
			continue;
		}
		if (a[i] == mn) {
			d = min(abs(i-index),d);
			index = i;
		}
	}	
	cout << d << '\n';

	return 0;
		
}

