// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x , y , x1 , y1; cin >> x >> y >> x1 >> y1;

	int ans = 2 * abs(x-x1) + 2 * abs(y-y1) + 4;

	if (x == x1) ans += 2;
	if (y == y1) ans += 2;
	if (x == x1 && y == y1) ans += 2;

	cout << ans << '\n';


	return 0;
		
}

