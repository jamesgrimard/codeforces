// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;

	int o = 0 , t = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		x == 100 ? o++ : t++;
	}

	if (o % 2 == 1 || (o == 0 && t % 2 == 1) || (t == 0 && o == 0)) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}

