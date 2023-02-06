// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		int n;
		cin >> n;

		int count = 0, ends = 0;
		bool mid = true;
		for (int i=0;i<n;i++){
			int x;
			cin >> x;
			if ((i == 0 && x == n) || (i == n-1 && x == 1)) ends++;
			if (i == 0 && x == 1) count++;
			if (i == n-1 && x == n) count++;
			if (i != 0 && i != n-1 && (i+1) != x) mid = false;
		}
		if (ends == 2) {
			cout << 3;
		} else if (count == 2 && mid == true) {
			cout << 0;
		} else if (count >= 1) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << '\n';
	}


	return 0;
}