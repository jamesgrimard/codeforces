// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt,a,b;
	cin >> tt >> a >> b;

	if (tt == 1 && a == b) {
		cout << 1 << endl;
	} else if (a+b < tt) {
		cout << (tt - (a+b)) << endl;
	} else  {
		cout << 0 << endl;
	}

	if (b >= a) {
		for (int i=1;i<=tt;i++) {
			if (a > 0 && i != tt) {
				a--;
				cout << 1 << ":" << 0 << endl;
				continue;
			}
			if (b > 0 && i != tt) {
				b--;
				cout << 0 << ":" << 1 << endl;
				continue;
			}
			cout << a << ":" << b << endl;
		}
	} else {
		for (int i=1;i<=tt;i++) {
			if (b > 0 && i != tt) {
				b--;
				cout << 0 << ":" << 1 << endl;
				continue;
			}
			if (a > 0 && i != tt) {
				a--;
				cout << 1 << ":" << 0 << endl;
				continue;
			}
			cout << a << ":" << b << endl;
		}
	}

	return 0;
}