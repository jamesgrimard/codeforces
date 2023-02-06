// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long y,x;
	cin >> y >> x;

	if (x == 1) {
		cout << (y - 1) * x;
	} else {
		cout << (x - 1) * y;
	}
	return 0;
}
