// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long l1 , r1 , l2 , r2 , k; cin >> l1 >> r1 >> l2 >> r2 >> k;
	long long ans = 0;
	if (l2 <= r1) {
		ans = min(r1 - max(l2,l1) + 1 , r2 - max(l2,l1) + 1);
		if (k >= max(l2,l1) && k <= min(r1,r2)) ans--;
	}
	cout << max(ans,0LL);

	return 0;
}

