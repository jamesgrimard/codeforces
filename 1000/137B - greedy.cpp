// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	map<int,bool> m; 
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x <= n) m[x] = 1;
	}
	cout << n - size(m) ;

	return 0;
}



