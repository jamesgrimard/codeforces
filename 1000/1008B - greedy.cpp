// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;cin >> n;
	int p = 1000000000;
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int x ,y ; cin >> x >> y;
		if (min(x,y) > p) ans = 0;
		(max(x,y) <= p) ? p = max(x,y) : p = min(x,y);
	}
	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



