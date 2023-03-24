// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	
	int a , b , c; cin >> a >> b >> c;

	int A = c % a , B = c % b;

	bool ans = 0;

	while (A + a <= c || B + b <= c) {
		if (A % b == 0 || B % a == 0) ans = 1;
		if (A + a <= c) A += a;
		if (B + b <= c) B += b;
	}

	(ans == 1) ? cout << "Yes\n" : cout << "No\n";


	return 0;
}

