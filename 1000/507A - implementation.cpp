// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = i + 1;
	}

	sort(begin(a),end(a));
	
	vector<int> b;
	for (int i=0;i<n;i++) {
		if (k - a[i].first >= 0) {
			b.push_back(a[i].second);
			k -= a[i].first;
			continue;
		}
		break;
	}

	cout << size(b) << '\n';
	for (int i=0;i<size(b);i++) cout << b[i] << " ";

	return 0;
}



