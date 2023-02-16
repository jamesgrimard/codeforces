// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	for (int j=1;j<=n*n/2;j+=(n/2)) {
		for (int i=j;i<j+n/2;i++) {
			cout << i << " " << n*n - (i-1) << " ";
		}
		cout << '\n';
	}

	return 0;
}



