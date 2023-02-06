// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a , b; cin >> a >> b;

	int A = 0 , B = 0;

	if (b % a != 0) {
		cout << -1;
		return 0;
	}

	while (a > 0) {
		if (a % 3 == 0) {
			a /= 3; A++;
			continue;
		}
		if (a % 2 == 0) {
			a /= 2; A++;
			continue;
		}
		break;
	}

	while (b > 0) {
		if (b % 3 == 0) {
			b /= 3; B++;
			continue;
		}
		if (b % 2 == 0) {
			b /= 2; B++;
			continue;
		}
		break;
	}

	if (a != b) {
		cout << -1;
		return 0;
	}
	cout << (B-A);

	return 0;
}