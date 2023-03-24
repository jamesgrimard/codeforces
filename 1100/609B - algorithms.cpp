// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , m; cin >> n >> m;

	vector<long long> a(m+1);

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x]++;
	}

	long long k = ((n-1LL)*(n-1LL)+(n-1LL))/2LL;

	for (int i=1;i<=m;i++) {
		if (a[i] != 0) {
			long long p = ((a[i]-1LL)*(a[i]-1LL)+(a[i]-1LL))/2LL;
			k -= p;
		}
	}

	cout << k;

	return 0;
}

