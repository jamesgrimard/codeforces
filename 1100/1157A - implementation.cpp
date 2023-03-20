// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<int,bool> m;
	int cnt = 0;

	while (1) {
		if (n == 1 && m[n] == 1) break;
		if (m[n] != 1) cnt++;
		m[n] = 1;
		n++;
		while (n % 10 == 0) n/=10;
	}

	cout << cnt << '\n';

	return 0;
}
