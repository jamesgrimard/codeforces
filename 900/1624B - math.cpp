// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		int a,b,c;
		cin >> a >> b >> c;

		int a1 = b - (c - b);
		int b1 = a + (c - a) / 2;
		int c1 = b + (b - a);

		if (a1 >= a && a1 % a == 0 && a1 > 0) {
			cout << "YES";
		} else if ((c-a) % 2 == 0 && b1 >= b && b1 % b == 0 && b1 > 0) {
			cout << "YES";
		} else if (c1 >= c && c1 % c == 0 && c1 > 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		
		cout << '\n';

	}

	return 0;
}

