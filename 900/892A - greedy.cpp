// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<pair<int,int>> a(n);

	for (int i=0;i<n;i++) cin >> a[i].second;
	for (int i=0;i<n;i++) cin >> a[i].first;

	sort(begin(a),end(a));

	long long sum = 0;

	for (int i=0;i<n;i++) sum += a[i].second;

	(a[n-1].first+a[n-2].first >= sum) ? cout << "YES" : cout << "NO";

	

	return 0;
}

