// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m , d; cin >> n >> m >> d;
		vector<int> a(n),r(n+1),b(m);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			r[a[i]] = i + 1;
		}
		for (int i=0;i<m;i++) {
			int x; cin >> x;
			b[i] = r[x];
		}
		int mn = n-1;
		for (int i=1;i<m;i++) {
			mn = min(mn,max(0,b[i]-b[i-1]));
			if (b[i-1]+d+1 <= n) mn = min(mn,max(0,(b[i-1]+d+1)-b[i]));
			if (d < n-1) mn = min(mn,max(0,d+1-(b[i]-b[i-1])));
			
		}
		cout << mn << '\n';

	}

	return 0;	
}

		