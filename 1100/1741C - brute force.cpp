// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n);
		int mx = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			mx = max(a[i],mx);
		}
		int s = 0 , mn = n;
		for (int i=0;i<n;i++) {
			s += a[i];
			if (s < mx) continue;
			int sum = 0 , cnt = 0 , mxl = i+1;
			for (int j=i+1;j<n;j++) {	
				sum += a[j];
				cnt++;
				if (sum < s) continue;
				if (sum > s) break;
				mxl = max(cnt,mxl);
				sum = 0; cnt = 0;
			}
			if (sum == 0) mn = min(mn,mxl);
		}
		cout << mn << '\n';
	}

	return 0;
}

