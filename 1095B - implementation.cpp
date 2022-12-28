// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	sort(a.begin(),a.end());

	if (a[n-1] - a[n-2] > a[1] - a[0]) {
		cout << (a[n-2] - a[0]);
	} else {
		cout << (a[n-1] - a[1]);
	}

	return 0;
}

