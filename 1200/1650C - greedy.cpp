// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , q; cin >> n >> q;
		vector<pair<int,pair<int,int>>> a(q);
		for (int i=0;i<q;i++) {
			cin >> a[i].second.first >> a[i].first;
			a[i].second.second = i+1;
		}
		sort(begin(a),end(a));
		long long sum = 0;
		vector<pair<int,int>> out(2*n);
		for (int i=0;i<n*2;i++) {
			sum += a[i].first;
			out[i] = a[i].second;
		}
		sort(begin(out),end(out));
		cout << sum << '\n';
		for (int i=0;i<n;i++) cout << out[i].second << " " << out[2*n-1-i].second << '\n';
	}

	return 0;
}