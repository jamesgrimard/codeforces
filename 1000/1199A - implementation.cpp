// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , x , y; cin >> n >> x >> y;

	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];

	int ans = n;
	for (int i=0;i<n;i++) {
		bool f1 = 1 , f2 = 1;
		for (int j=i;j>=max(i-x,0);j--) {
			if (a[j] < a[i]) f1 = 0;
		}
		for (int j=i;j<=min(i+y,n-1);j++) {
			if (a[j] < a[i]) f2 = 0;
		}
		if (f1 == 1 && f2 == 1) ans = min(i+1,ans);
	}

	cout << ans;

	return 0;
}