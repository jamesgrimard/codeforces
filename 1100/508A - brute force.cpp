// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h , w , k; cin >> h >> w >> k;

	vector<vector<bool>> a(h+2,vector<bool>(w+2));

	int ans = 0;

	for (int i=0;i<k;i++) {
		int y,x; cin >> y >> x;
		a[y][x] = 1;

		int TL = 0 , TR = 0 , BL = 0 , BR = 0;

		if (a[y-1][x-1] == 1) TL++;
		if (a[y-1][x] == 1) TL++;
		if (a[y][x-1] == 1) TL++;

		if (a[y-1][x+1] == 1) TR++;
		if (a[y-1][x] == 1) TR++;
		if (a[y][x+1] == 1) TR++;

		if (a[y+1][x-1] == 1) BL++;
		if (a[y+1][x] == 1) BL++;
		if (a[y][x-1] == 1) BL++;

		if (a[y+1][x+1] == 1) BR++;
		if (a[y+1][x] == 1) BR++;
		if (a[y][x+1] == 1) BR++;

		if ((TL == 3 || TR == 3 || BL == 3 || BR == 3) && ans == 0) ans = i + 1;
	}

	cout << ans ;


	return 0;
}

