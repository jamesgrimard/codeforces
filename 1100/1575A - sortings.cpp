// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;

	vector<pair<string,int>> a(n);

	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		a[i].second = i+1;
	}

	for (int i=0;i<n;i++) {
		for (int j=1;j<m;j+=2) {
			a[i].first[j] = char('Z' - (a[i].first[j] - 'A'));
		}
	}

	sort(begin(a),end(a));

	for (auto v : a) cout << v.second << " ";
	cout << '\n';
	

	return 0;
}

