// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x , y; cin >> x >> y;

	int use = max(x,y) , charge = min(x,y) , cnt = 0;

	while (use >= 2 || charge >= 2) {
		use -= 2;
		charge += 1;

		if (use <= 2 && charge != 1) swap(use,charge);
		cnt++;
		if (use == 0 || charge == 0) break;
	}

	cout << cnt;

	return 0;
}

