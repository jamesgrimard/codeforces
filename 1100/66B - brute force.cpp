// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n ;cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int mx = 0;
	for (int i=0;i<n;i++) {
		int cnt = 1;
		for (int l=i-1;l>=0;l--) {
			if (a[l] > a[l+1]) break;
			cnt++;
		}
		for (int r=i+1;r<n;r++) {
			if (a[r] > a[r-1]) break;
			cnt++;
		}
		mx = max(cnt,mx);
	}

	cout << mx;


	return 0;
}
