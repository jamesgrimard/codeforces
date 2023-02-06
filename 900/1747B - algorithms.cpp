// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		int k = 3*n;

		if(n%2==1)n++; n /= 2;

		cout << n << '\n';

		for (int i=0;i<n;i++){ 
			cout << (i*3+1) << " " << (k-3*i) << '\n';
		}
	}

	return 0;
}

