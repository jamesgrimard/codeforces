// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	int buffer = 0, ans = -1;

	for (int i=0;i<n;i++) {
		int x; cin >> x;
		k -= min(8,x+buffer);
		if (x > 8) {
			buffer += (x-8);
		} else {
			buffer -= min(max(8-x,0),buffer);
		}		
		if (k <= 0 && ans == -1) ans = i+1;
	}

	cout << ans;

	return 0;
}

