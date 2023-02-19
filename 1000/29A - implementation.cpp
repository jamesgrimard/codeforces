// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n; cin >> n;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (i == j) continue;
			if (a[i].first+a[i].second == a[j].first && a[j].first+a[j].second == a[i].first) {
				cout << "YES";
				return 0;
			}
		}
	}

	cout << "NO";

	return 0;
}

