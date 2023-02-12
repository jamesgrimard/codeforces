// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	int k = -1 + sqrt(1+8*n);
	k /= 2;
	int left = n - (k * k + k) / 2;

	cout << k << '\n';
	for (int i=1;i<=k;i++) {
		(i == k) ? cout << i + left << " " : cout << i << " ";
	}

	return 0;
}



