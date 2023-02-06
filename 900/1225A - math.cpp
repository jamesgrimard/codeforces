// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b ; cin >> a >> b;

	if (a == 9 && b == 1) {
		cout << 99 << " " << 100; return 0;
	}

	if (a > b || b - a > 1) {
		cout << -1; return 0;
	} 

	if (a == b) {
		cout << (a*10) << " " << (b*10+1);
	} else {
		cout << a << " " << b;
	}

	return 0;
}

