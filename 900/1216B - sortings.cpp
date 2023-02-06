// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<pair<int,int>> a(n);

	for (int i=0;i<n;i++) {
		pair<int,int> p;
		p.second = i+1; cin >> p.first;
		a[i] = p;
	}

	sort(a.rbegin(),a.rend());

	long long sum = 0;

	for (int i=0;i<n;i++) {
		sum += (a[i].first * i + 1);
	}

	cout << sum << '\n';

	for (int i=0;i<n;i++) cout << a[i].second << " ";

	return 0;
}

