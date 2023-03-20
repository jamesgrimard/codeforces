// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(n);
	int A = 0 , B = 0;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=1;i<n;i++) {
		if (a[i] != a[0]) A = i;
	}
	for (int i=n-2;i>=0;i--) {
		if (a[i] != a[n-1]) B = n-1 - i;
	}

	cout << max(A,B) << '\n';

	return 0;
}

