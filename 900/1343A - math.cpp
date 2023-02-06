// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--){
		long long x;
		cin >> x;

		for (int i=2;i<=x;i++) {
			if (x % (int) (pow(2,i) - 1) == 0) {
				cout << (long long) (x/(pow(2,i) - 1));
				break;
			}
		}
		cout << '\n';
	}

	return 0;
}

