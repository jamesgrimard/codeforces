// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		pair<int,int> lowest;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (i == 0 || x < lowest.second) {
				lowest.second = x; lowest.first = i+1;
			}
		}
		if (n % 2 == 1) {
			cout << "Mike\n"; continue;
		}
		if (lowest.first % 2 == 1) {
			cout << "Joe\n";
		} else {
			cout << "Mike\n";
		}
	}

	return 0;
}

