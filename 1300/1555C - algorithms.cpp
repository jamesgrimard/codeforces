// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<long long> a(n+1),b(n+1);
		long long mn = 0;
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=1;i<=n;i++) cin >> b[i];
		for (int i=n-1;i>=1;i--) a[i] += a[i+1];
		for (int i=2;i<=n;i++) b[i] += b[i-1];
		for (int i=n;i>=1;i--) {
			if (i == n) {
				mn = max(b[i-1],a[(i+1)%(n+1)]);
			} else {
				mn = min(mn,max(b[i-1],a[(i+1)%(n+1)]));
			}
		}
		cout << mn << '\n';
	}


	return 0;	
}