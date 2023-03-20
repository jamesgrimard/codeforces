// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int N = n , cnt = 0;
	n = n / 2 + 1;
	cout << n << '\n';
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (i == 1 || j == n) {
				cout << i << " " << j << '\n';
				cnt++;
			}
			if (cnt == N) return 0;
		}
	}
	return 0;
}

