// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n>> k;
	int sum = 0, p = 1;
	for (int i=0;i<n;i++) {
		int x , y; cin >> x >> y;
		y++;
		sum += ((x - p) % k);
		sum += (y - x);
		p = y;
	}

	cout << sum;

	return 0;
}
