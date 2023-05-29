// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n+1),b(n+1),r(n+1);
		for (int i=1;i<=n;i++) {
			cin >> a[i];
			if (a[i] < i) b[i] = 1;
			r[i] = r[i-1] + b[i];
		}
		long long cnt = 0;
		for (int i=n;i>=2;i--) {
			if (b[i] && a[i] > 1) cnt += r[a[i]-1];
		}
		cout << cnt << '\n';
	}

	return 0;	
}