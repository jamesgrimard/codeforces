// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int o = 0 , e = 0 , s = 0;

	for (int i=0;i<n;i++){
		int x; cin >> x;
		s += x;
		if (x % 2 == 0) {
			e++;
		} else {
			o++;
		}
	}

	if (s % 2 == 0) {
		cout << e << '\n';
	} else {
		cout << o << '\n';
	}

	return 0;
}

