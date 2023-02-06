// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	long long count = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int p = a[n-1]+1;
	for (int i=n-1;i>=0;i--) {
		count += min(p-1,a[i]);
		p = min(p-1,a[i]);
		if (p == 0) break;
	}
	cout << count;

	return 0;
}