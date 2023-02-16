// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i > 0) a[i] += a[i-1];
	}
	int mn , mx; cin>>mn>>mx;
	int index = 0;
	for (int i=0;i<n-1;i++) {
		if (a[i] >= mn && a[i] <= mx && a[n-1] - a[i] >= mn && a[n-1] - a[i] <= mx) index = i + 2;
	}

	cout << index;

	return 0;
}



