// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		long long tmp;
		cin >> tmp;
		
		((tmp & 1) == 1 || __builtin_popcountll(tmp) != 1) ? cout << "YES" : cout << "NO";

		cout << '\n';

	}

	return 0;
}

