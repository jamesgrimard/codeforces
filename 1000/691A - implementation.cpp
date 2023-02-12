// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int z = 0 , o = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		(x == 0) ? z++ : o++;
	}

	((z == 1 && n > 1) || (z == 0 && o == 1)) ? cout << "YES" : cout << "NO";

	return 0;
}
