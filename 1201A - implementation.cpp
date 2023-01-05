// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;

	vector<string> a(n);

	for (int i=0;i<n;i++) cin >> a[i];

	vector<int> b(m);

	int total = 0;

	for (int i=0;i<m;i++) {
		cin >> b[i];
		total += b[i]*n;
	}

	for (int i=0;i<m;i++) {
		map<char,int> m;
		for (int j=0;j<n;j++) m[a[j][i]]++;
		int mx = 0;
		for (auto [k,v] : m) mx = max(v,mx);
		total -= (n-mx)*b[i];
	}

	cout << total;

	return 0;
}

