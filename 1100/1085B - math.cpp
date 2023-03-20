// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<pair<int,int>> a;
	for (int i=1;i<=k-1;i++) {
		if (n % i == 0) {
			pair<int,int> p;
			p.first = n/i;
			p.second = i;
			a.push_back(p);
		}
	}

	int mn = 0;
	for (int i=0;i<size(a);i++) {
		if (i == 0) mn = a[i].first * k + a[i].second;
		mn = min(a[i].first * k + a[i].second,mn);
	}

	cout << mn << '\n';


	return 0;
}

