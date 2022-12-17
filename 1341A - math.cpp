// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;

		int k1 = (a - b) * n;
		int k2 = (a + b) * n;

		((k1 <= (c-d) && k2 >= (c-d)) || (k1 >= (c-d) && k1 <= (c+d))) ? cout << "Yes" : cout << "No";
		cout << '\n';
	}

}