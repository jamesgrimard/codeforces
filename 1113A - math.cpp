// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , v ; cin >> n >> v;

	int cur = 1 , cost = 0;

	for (int i=1;i<=n;i++) {
		cur--;
		if (cur - (n-i) < 0) {
			int fill = min(v-cur,n-i);
			cur += fill; cost += fill*i;
		}
	}

	cout << cost << '\n';

	return 0;
}

