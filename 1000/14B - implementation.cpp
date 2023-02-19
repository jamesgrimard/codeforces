// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n , k; cin >> n >> k;

	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;

	int mn = 1000 , mx = 0;
	for (int i=0;i<n;i++){
		if (a[i].first > a[i].second) swap(a[i].first,a[i].second);
		if (i == 0) {
			mn = a[i].first; mx = a[i].second;
			continue;
		}
		mn = max(a[i].first,mn);
		mx = min(a[i].second,mx);
	}

	if (mn > mx) {
		cout << -1; 
	} else {
		if (k < mn) {
			cout << abs(mn-k);
		} else if (k > mx) {
			cout << abs(mx-k);
		} else {
			cout << 0;
		}
	}



	return 0;
}

