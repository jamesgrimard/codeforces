// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isIntegral(float x) {
	if (ceil(x) == floor(x)) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {

		int n,cnt3(0),cnt2(0);
		cin >> n;

		while (n % 3 == 0) {
			n /= 3;
			cnt3++;
		}

		while (n % 2 == 0) {
			n /= 2;
			cnt2++;
		}

		if (n == 1 && cnt3 >= cnt2) {

			cout << (2 * cnt3 - cnt2);

		} else {

			cout << -1;

		}

		cout << '\n';

	}

	return 0;
}

