// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		vector<int>a(3);
		for (int i=0;i<3;i++) cin >> a[i];
		sort(begin(a),end(a));
		int k = a[2]-a[1];
		int cnt = min(k,a[0]);
		a[2] -= min(k,a[0]);
		a[0] = max(a[0]-k,0);
		cnt += a[0];
		a[2] -= a[0] / 2;
		a[1] -= a[0] / 2;
		if (a[0] % 2 == 1) a[1]--;
		cnt += min(a[2],a[1]);
		cout << cnt << '\n';
	}

	return 0;
}

