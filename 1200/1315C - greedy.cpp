// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(2*n+1) , r(2*n+1);
		for (int i=1;i<=n;i++) {
			cin >> a[2*i-1];
			r[a[2*i-1]] = 1;
		}
		bool ans = 1;
		for (int i=1;i<=2*n;i+=2) {
			for (int j=a[i]+1;j<=2*n;j++) {
				if (r[j] == 0) {
					r[j] = 1;
					a[i+1] = j;
					break;
				}
			}
			if (a[i+1] <= a[i]) ans = 0;
		}
		if (ans) {
			for (int i=1;i<=2*n;i++) cout << a[i] << " ";
			cout << '\n';
		} else {
			cout << -1 << '\n';
		}
		
	}

	return 0;
}