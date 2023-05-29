// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ,k; cin >> n >> k;
	vector<pair<int,pair<int,int>>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].second.first;
	for (int i=0;i<n;i++) {
		cin >> a[i].second.second;
		a[i].first = a[i].second.first-a[i].second.second;
	}
	sort(begin(a),end(a));
	int cost = 0;
	for (int i=0;i<n;i++) {
		if (a[i].first <= 0 || i < k) {
			cost += a[i].second.first;
		} else {
			cost += a[i].second.second;
		}
	}

	cout << cost;

	
	return 0;	
}

		