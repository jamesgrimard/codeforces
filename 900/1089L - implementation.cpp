// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	vector<pair<int,int>> a(n);

	map<int,bool> m;
	for (int i=0;i<n;i++) cin >> a[i].second;
	for (int i=0;i<n;i++) cin >> a[i].first;
	
	sort(begin(a),end(a));

	long long sum = 0;

	for (int i=n-1;i>=0;i--) {
		if (m[a[i].second] == 1) continue;
		m[a[i].second] = 1;
		a[i].first = 0; a[i].second = 0;
	}

	for (int i=0;i<n;i++) {
		if (a[i].first != 0 && k-size(m) > 0) {
			sum += a[i].first; k--;
		}
		if (k-size(m) <= 0) break;
	}


	

	//for (int i=0;i<n;i++) cout << a[i].first << " " << a[i].second << '\n';
	// cout << '\n';
	cout << sum;
	return 0;
}

