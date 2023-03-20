// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int mx = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i];
		mx = max(a[i],mx);
	}
	int cnt = 0 ,tally = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == mx) tally++;
		if ((a[i] != mx && tally > 0) || i == n-1) {
			cnt = max(cnt,tally);
			tally = 0;
		}
	}

	cout << cnt;

	return 0;
}

