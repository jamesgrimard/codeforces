// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<pair<int,int>> a,b;
	for (int i=0;i<n;i++) {
		pair<int,int> p; cin >> p.first >> p.second;
		if (p.first < 0) {
			a.push_back(p);
		} else {
			b.push_back(p);
		}
	}

	sort(rbegin(a),rend(a)); sort(begin(b),end(b));

	long long sum = 0;

	for (int i=0;i<min(a.size(),b.size());i++) {
		sum += a[i].second;
		sum += b[i].second;
		if (i == min(a.size(),b.size()) - 1) {
			if (a.size() > b.size()) {
				sum += a[i+1].second;
			} else if (b.size() > a.size()) {
				sum += b[i+1].second;
			}
		}
	}

	if (a.size() == 0) {
		sum += b[0].second;
	} else if (b.size() == 0) {
		sum += a[0].second;
	}

	cout << sum;

	return 0;
}

