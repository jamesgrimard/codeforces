// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , q , k; cin >> n >> q >> k;
	vector<long long> a(n+1),b(n+1);
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=2;i<=n;i++) b[i] = (a[i] - a[i-1LL] - 1LL) + b[i-1LL];
	for (int i=0;i<q;i++) {
		long long l , r; cin >> l >> r;
		cout << k - (r-l+1LL) + (b[r]-b[l]) << '\n';
	}


	return 0;
}