// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string x, y; cin >> x >> y;
	string s = "";
	for (int i=0;i<size(x);i++) {
		if (x[i] < y[i]) {
			cout << -1; return 0;
		}
	}

	cout << y;

	return 0;
}