// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin>>tt;

	int holder = 0, count = 0, tally = 0;
	for (int i=0;i<tt;i++){
		int x;
		cin >> x;
		if (x >= holder) {
			tally++;
		}
		if (x < holder || i == (tt-1)) {
			if (count < tally) {
				count = tally;
			}
			tally = 1;
		}
		holder = x;
	}

	cout << count;

	return 0;
}