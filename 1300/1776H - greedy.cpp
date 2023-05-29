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
		int p = n-1 , cnt = 0;
		for (int i=n-1;i>=0;i--) {
			while (a[p] != b[i]) {
				if (p == 0) goto out;
				p--;
			}
			cnt++;
			if (p == 0) break;
		}
		out:cout << n - cnt << '\n';
	}

	return 0;	
}

		