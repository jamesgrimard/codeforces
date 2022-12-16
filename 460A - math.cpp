// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,m;
	cin >> n >> m;

	for (int i=1;i<=10000;i++) {
		n -= 1;
		if (i % m == 0) n++;
		if (n <= 0) {
			cout << i << '\n';
			return 0;
		}
	}

	return 0;
}

