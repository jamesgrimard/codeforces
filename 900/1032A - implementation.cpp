// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	vector<int> a(n); map<int,int> m;

	for (int i=0;i<n;i++) {
		cin >> a[i];
		m[a[i]]++;
	}

	int mx= 0;
	for (auto [_,v] : m) mx = max(mx,v);

	int g = mx/k;
	if (mx % k != 0) g++;

	cout << (k*size(m)*g-n);



	return 0;
}

