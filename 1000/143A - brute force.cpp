// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y1 , y2 , x1 , x2 , d1 , d2; cin >> y1 >> y2 >> x1 >> x2 >> d1 >> d2;

	for (int i=1;i<=9;i++) {
		for (int j=1;j<=9;j++) {
			if (j == i) continue;
			for (int k=1;k<=9;k++) {
				if (k == i || k == j) continue;
				for (int l=1;l<=9;l++) {
					if (l == k || l == i || l == j) continue;

					if (i + j == y1 && i + k == x1 && i + l == d1) {
						if (k + l == y2 && k + j == d2) {
							if (l + j == x2) {
								cout << i << " " << j << '\n';
								cout << k << " " << l << '\n';
								return 0;
							}
						}
					}

				}
			}
		}
	}

	cout << -1;

	return 0;
}



