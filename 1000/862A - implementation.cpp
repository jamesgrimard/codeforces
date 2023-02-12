// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ,k; cin >> n >> k;
	vector<bool> a(101);
	int mx = k , cnt = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x == k) {cnt++;continue;}
		mx = max(mx,x);
		a[x] =1;
	}
	int c2 = cnt;
	for (int i=mx;i>=0;i--) {
		if (i == k) continue;
		if (a[i] != 1) cnt++;
	}
	for (int i=0;i<=101;i++) {
		if (i == k) continue;
		if (i < k && a[i] == 0) c2++;
	}

	cout << min(cnt,c2);

	return 0;
}



