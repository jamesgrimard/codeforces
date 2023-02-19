// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<int> a(7);
	for (int i=0;i<7;i++) cin >> a[i];
	int k = 0;
	while (n > 0) {
		n -= a[k % 8];
		k++;
	}
	cout << k % 8;

	return 0;
}



