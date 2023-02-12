// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;
	map<int,int> m;
	int p = 0 , q = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		m[x]++;
		if (i == 0) p = x;
		if (i != 0 && x != p) q = x;
	}
	bool ans = 1;
	if (size(m) != 2 || m[p] != m[q]) ans = 0;

	if (ans == 1) {
		cout << "YES\n";
		cout << p << " " << q << '\n';
	} else {
		cout << "NO\n";
	}


	return 0;
}



