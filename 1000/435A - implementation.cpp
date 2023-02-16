// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	int count = 1 , c = k;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x <= c) {c -= x;continue;}
		if (x > c) {
			count++;
			c = k - x;
		}
	}
	cout << count;

	return 0;
}



