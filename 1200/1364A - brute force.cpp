// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		vector<long long> a(n),b(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			b[i] = a[i] % k;
			if (i > 0) b[i] += b[i-1];
		}
		int r = -1;
		for (int i=0;i<n;i++) if (b[i] % k != 0) r = max(r,max(i+1,n-(i+1)));

		cout << r << '\n';
	}

	return 0;
}