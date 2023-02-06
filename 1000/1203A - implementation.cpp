// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n*2);
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			a[i] = x; a[i+n] = x;
		}
		int mx = 0;
		for (int i=0;i<n;i++) {
			int c1 = 1, c2 = 1;
			bool f1 = 0 , f2 = 0;
			for (int j=i;j<i+n-1;j++) {
				if (f1 == 0) {
					if (a[j] == a[j+1]-1) {
						c1++;
					} else {
						f1 = 1;
					}
				}
				if (f2 == 0) {
					if (a[j] == a[j+1]+1) {
						c2++;
					} else {
						f2 = 1;
					}	
				}
			}
			mx = max(max(c1,c2),mx);
		}
		(mx == n) ? cout << "YES\n" : cout << "NO\n";
	}


	return 0;
}