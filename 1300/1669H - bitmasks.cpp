// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n,k; cin >> n >> k;
		vector<int> a(31);
		for (int i=0;i<n;i++) {
			int x,j=0; cin >> x;
			while (j < 31) {
				int y = pow(2,j);
				if ((x&y) == y) a[j]++;
				j++;
			}
		}
		int ans = 0;
		for (int i=30;i>=0;i--) {
			if (n-a[i] > k) continue;
			while (a[i] < n && k > 0) {
				a[i]++ , k --;
			}
			if (a[i] == n) ans |= ((int)pow(2,i));
		}
		cout << ans << '\n';

	}

	return 0;	
}