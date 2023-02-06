// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,k,x;
	cin >> tt >> k >> x;

	vector<int> a(tt);
	for (int i=0;i<tt;i++) {
		cin >> a[i];
	}
	for (int i=(tt-1);i>(tt-1-k);i--) {
		a[i] = x;
	}
	int sum = 0;
	for (int i=0;i<tt;i++) {
		sum += a[i];
	}

	cout << sum << '\n';

	return 0;
}