// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),b(n+1);
		for (int i=1;i<=n;i++) cin >> a[i];
		for (int i=1;i<=n;i++) cin >> b[i];
		sort(begin(a),end(a));
		sort(rbegin(b),rend(b));
		for (int i=1;i<=n;i++) {
			b[i] += b[i-1];
			a[i] += a[i-1];
		}		
		
		
		int u = a[n], t = 0;

		while (u - a[(n+t)/4] < b[min(n,n+t-(n+t)/4)-1]) {
			u += 100;
			t++;
		}
 
		cout << t << '\n';
	}
 
	
	return 0;
}