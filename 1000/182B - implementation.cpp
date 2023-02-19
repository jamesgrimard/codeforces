// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k , n; cin >> k >> n;
	int sum = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == n-1) continue;
		sum += (k-x);
	}
	cout << sum;


	return 0;
}



