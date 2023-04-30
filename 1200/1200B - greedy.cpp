// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , m , k; cin >> n >> m >> k;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		bool ans = 1;
		for (int i=0;i<n-1;i++) {
			m += (a[i]-max(0,a[i+1]-k));
			if (m < 0) ans = 0;
		} 
		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}