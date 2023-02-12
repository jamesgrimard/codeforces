// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int k = 1;
	int mx = 0;
	while ((pow(2,k)-1) * pow(2,k-1) <= n) {
		int j = (pow(2,k)-1) * pow(2,k-1);
		if (n % j == 0) mx = j;
		k++;
	}
	cout << mx;


	return 0;
}



