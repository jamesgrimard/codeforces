// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	long long s1 = 0 , s2 = 0 , mx = 0 , mx2 = 0;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i].first >> a[i].second;
		s1 += a[i].first;
		s2 += a[i].second;
		if (a[i].second >= mx) {
			mx2 = mx;
			mx = a[i].second;
		} else if (a[i].second > mx2) {
			mx2 = a[i].second;
		}
	}

	for (int i=0;i<n;i++) {
		if (a[i].second == mx) {
			cout << (s1 - a[i].first) * mx2;
		} else {
			cout << (s1 - a[i].first) * mx;
		}
		cout << " ";
	}


	return 0;
}

