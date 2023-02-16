// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	int p = 0 , index = n;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		int q = ceil((float) x / (float) k);
		if (q >= p) {
			p = q;
			index = i + 1;
		}
	}

	cout << index;

	return 0;
}



