// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].second >> a[i].first;
	sort(begin(a),end(a));

	for (int i=n-1;i>=1;i--){
		if (a[i].second < a[i-1].second) {
			cout << "Happy Alex";
			return 0;
		}
	}

	cout << "Poor Alex";


	return 0;
}

