// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int capacity , n; cin >> capacity >> n;

	vector<pair<int,int>> a(n);

	for (int i=0;i<n;i++) cin >> a[i].second >> a[i].first;

	sort(rbegin(a),rend(a));

	long long sum = 0;

	for (int i=0;i<n;i++) {
		sum += min(capacity,a[i].second)*a[i].first; capacity-= a[i].second;
		if (capacity < 1) break;
	}

	cout << sum;

	return 0;
}

