// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i=0;i<n;i++) cin >> a[i];
		long long cnt = 0;
		for (int i=1;i<n;i++) cnt += max(0,(a[i]-a[i-1])*-1);
		cout << cnt << '\n';
	}

	return 0;
}