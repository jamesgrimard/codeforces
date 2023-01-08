// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int t , s , x; cin >> t >> s >> x;

	if (t <= x && x != t+1 && ((x-t) % s == 0 || (x-(t+1)) % s == 0)) {
		cout << "YES";
	} else {
		cout << "NO";
	}


	return 0;
}

