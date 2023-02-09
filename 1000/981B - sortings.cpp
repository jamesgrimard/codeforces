// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<pair<int,int>> a;
	int n; cin >> n;
	for (int i=0;i<n;i++) {
		pair<int,int> p; cin >> p.first >> p.second;
		a.push_back(p);
	}
	int m; cin >> m;
	for (int i=0;i<m;i++) {
		pair<int,int> p; cin >> p.first >> p.second;
		a.push_back(p);
	}

	sort(begin(a),end(a));
	long long sum = 0;
	for (int i=0;i<n+m-1;i++) {
		if (a[i].first != a[i+1].first) sum += a[i].second;
		if (i == n+m-2) sum += a[i+1].second;
	}

	cout << sum;

	return 0;
}



