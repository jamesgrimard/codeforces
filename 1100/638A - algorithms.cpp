// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a; cin >> n >> a;

	(a % 2 == 1) ? cout << (a + 1) / 2 : cout << ((n + 1) - a + 1) / 2;

	return 0;
}

