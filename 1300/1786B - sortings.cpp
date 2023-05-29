// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n,w,h; cin >> n >> w >> h;
		vector<int> a(n),b(n);
		for (int i=0;i<n;i++) cin >> a[i];
		for (int i=0;i<n;i++) cin >> b[i];
		int shift = (b[0]-h) - (a[0]-w);
		vector<pair<int,int>> c(n),d(n);
		for (int i=0;i<n;i++) {
			c[i].first = a[i]-w+shift;
			c[i].second = c[i].first + w + w;
			d[i].first = b[i]-h;
			d[i].second = b[i]+h;
		}
		int left = 0 , mn = 0;
		for (int i=0;i<n;i++) {
			if (i == 0 || c[i].second - d[i].second < left) left = c[i].second - d[i].second;
			mn = max(mn,c[i].first-d[i].first);
		}
		if (left < 0 || mn > left) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}



	}


	return 0;	
}

		