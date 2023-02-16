// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b; cin >> a >> b;

	//quadrants
	if (a > 0 && b > 0) {
		cout << 0 << " " << a + b << " " << a + b << " " << 0;
	} else if (a > 0 && b < 0) {
		cout << 0 << " " << b - a << " " << a - b << " " << 0;
	} else if (a < 0 && b < 0) {
		cout << a + b << " " << 0 << " " << 0 << " " << b + a;
	} else if (a < 0 && b > 0) {
		cout << a - b << " " << 0 << " " << 0 << " " << b - a;
	}

	return 0;
}



