// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;	

	int mn = 0 , mx = 0;
	for (int i=0;i<n;i++) {
		if (a[i].first < mn || mn == 0) mn = a[i].first;
		mx = max(mx,a[i].second);
	}

	int index = -1;
	for (int i=0;i<n;i++) {
		if (a[i].first == mn && a[i].second == mx) {
			index = i + 1;
			break;
		}
	}

	cout << index;


	


	return 0;
}
