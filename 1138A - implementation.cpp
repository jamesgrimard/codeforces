// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n),b;

	int tally = 1;

	for (int i=0;i<n;i++) {
		cin >> a[i];
		if (i == 0) continue;
		if (a[i] == a[i-1]) tally++;
		if (a[i] != a[i-1] || i == n-1) {
			b.push_back(tally); tally = 1;
		}
	}

	if (a[n-1] != a[n-2]) b.push_back(1);

	int mx = 0;

	for (int i=0;i<size(b)-1;i++) mx = max(mx,min(b[i],b[i+1]));

	cout << (mx*2);

	return 0;
}

