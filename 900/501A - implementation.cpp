// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a,b,c,d; cin >> a >> b >> c >> d;

	int l_a = 3 * a / 10;
	int r_a = a - (a / 250 * c);

	int l_b = 3 * b / 10;
	int r_b = b - (b / 250 * d);

	if (max(l_a,r_a) == max(l_b,r_b)) {
		cout << "Tie";
	} else if (max(l_a,r_a) > max(l_b,r_b)) {
		cout << "Misha";
	} else {
		cout << "Vasya";
	}

	cout << '\n';

	return 0;
}

