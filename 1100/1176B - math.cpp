// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int z = 0 , o = 0 , t = 0;
		for (int i=0;i<n;i++) {
			int x; cin  >> x;
			if (x % 3 == 0) z++;
			if (x % 3 == 1) o++;
			if (x % 3 == 2) t++;
		}
		if (o >= t) {
			z += t;
			o -= t;
			t = 0;
		} else {
			z += o;
			t -= o;
			o = 0;
		}
		z += o/3;
		z += t/3;
		cout << z << '\n';
	}

	return 0;
}

