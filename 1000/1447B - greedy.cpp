// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int y, x; cin >> y >> x;
		int mn = 0 , sum = 0 , neg = 0;
		bool z = 0;
		for (int i=0;i<y;i++) {
			for (int j=0;j<x;j++) {
				int x; cin >> x;
				if (x < 0) neg++;
				if (x == 0) z = 1;
				if ((i == 0 && j == 0) || abs(x) < mn) mn = abs(x);
				sum += abs(x);
			}	
		}
		if (z == 1 || neg % 2 == 0) {
			cout << sum;
		} else if (neg % 2 == 1) {
			cout << (sum-abs(mn)*2);
		}
		cout << '\n';
	}


	return 0;
}
