// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt ;cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n), b(n+1);
		bool ans = 1;
		for (int i=0;i<n;i++) cin >> a[i];
		b[0] = a[0];
		b[n] = a[n-1];
		for (int i=0;i<n-1;i++) {
			b[i+1] = lcm(a[i],a[i+1]);
			if (gcd(b[i],b[i+1]) != a[i]) ans = 0;
		}		

		
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
		
	}

	return 0;
}