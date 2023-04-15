// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , q; cin >> n >> q;
	vector<pair<long long,long long>> a(n);
	long long sum = 0 , v = 0 , ve = 0;
	for (int i=0;i<n;i++) {
		cin >> a[i].first;
		sum += a[i].first;
	}

	for (int i=0;i<q;i++) {
		int t; cin >> t;
		if (t == 1) {
			long long index, value; cin >> index >> value;
			index--;
			if (a[index].second == v) {
				sum += (value - a[index].first);
				a[index].first = value;
			} else {
				sum += (value - ve);
				a[index].first = value;
			}
			cout << sum << '\n';
			a[index].second = v;
		} else {
			cin >> ve;
			sum = ve * n;
			v++;
			cout << sum << '\n';
		}
	}

	return 0;
}