// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) cin >> b[i];
		bool ans = 1;
		for (int i=0;i<n;i++) {
			if (a[i] != b[i]) {
				if (a[i] > b[i]) ans = 0;
				if (b[(i+1)%n] < b[i]-1) ans = 0;
			}
		}
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;	
}