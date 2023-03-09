// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		vector<int> a(3);
		for (int i=0;i<3;i++) cin >> a[i];
		sort(begin(a),end(a));
		int q = (a[0] + a[1] + a[2]);
		
		(q % 9 == 0 && q / 9 <= a[0]) ? cout << "YES\n" : cout << "NO\n";

	}

	return 0;
}

