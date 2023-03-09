// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		int a0,a1,a2,b0,b1,b2; cin >> a0 >> a1 >> a2 >> b0 >> b1 >> b2;
		int sum = min(a2,b1) * 2;
		cout << sum - max(a1-(b0+(b1-min(a2,b1))),0)*2 << '\n';
	}
	
	return 0;
}

