// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	long long mn = 0;
	int A = 0;
	for (int i=0;i<n;i++) {
		long long c,m; cin >> c >> m;
		long long ans = (k-c)/m;
		if ((k-c) % m != 0) ans++;
		ans = (m * ans + c)-k;
		if (k < c) ans = c-k;
		if (i == 0 || mn > ans) {
			mn = ans;
			A = i+1;
		}
	}
	cout << A;

	return 0;
}