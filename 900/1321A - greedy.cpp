// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<int> a(n),b(n);

	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) cin >> b[i];

	int A = 0 , B = 0;

	for (int i=0;i<n;i++) {
		if (a[i] > b[i]) A++;
		if (b[i] > a[i]) B++;
	}

	if (A == 0) {
		cout << -1;
	} else {
		cout << (B / A +1);
	}

	return 0;
}

