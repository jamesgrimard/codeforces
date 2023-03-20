// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	n *= 2;
	vector<int> a(n);
	map<int,bool> m;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		m[a[i]] = 1;
	}
	int cnt = 0 , p = a[0];
	for (int i=1;i<n;i++) {
		if (m[a[i] ^ p] == 1) cnt++;
		p ^= a[i];
	}
	(2 * cnt % 2 == 0) ? cout << "Karen\n" : cout << "Koyomi\n";

	return 0;
		
}

