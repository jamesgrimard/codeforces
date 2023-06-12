// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),b(n,-1),c(n);
		for (int i=0;i<n;i++) cin >> a[i];
		bool ans = 1;
		for (int i=0;i<n;i++) {
			for (int j=i+2;j>=2;j--) {
				if (a[i] % j != 0) {
					b[i] = i+2 - j;
					break;
				}
			}
			if (i > 0) c[i] = c[i-1];
			if (b[i] == -1 || c[i] < b[i]) ans = 0;
			c[i]++;
			if (ans == 0) break;
		}


		ans == 1 ? cout << "YES\n" : cout << "NO\n";
	} 


	return 0;	
}