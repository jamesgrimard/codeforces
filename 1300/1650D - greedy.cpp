// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	//cout << (6 + (-1 % 6)) %6;
	int tt; cin >>  tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),r(n+1),o(n+1);
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			r[i] = i;
		}
		for (int i=n;i>=2;i--) {
			for (int j=1;j<=n;j++) {
				if (a[j] == i) {
					int shift = (i + (r[j] - i)) % i;
					o[i] = shift;
					for (int l=1;l<=n;l++) {
						if (a[l] < a[j]) {
							r[l] = (i + (r[l]-shift)) % i;
						}
						if (a[l] == i) r[l] = i;
					}
										
				}
			}
		}
		for (int i=1;i<=n;i++) cout << o[i] << " ";
		cout << '\n';
	}
	
	return 0;	
}