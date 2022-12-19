// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n) {
	long long s = sqrt(n) + 1;
	for (int i=2;i<=s;i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while (tt--) {
		long long a,b;
		cin >> a >> b;

		if (isPrime(a) == true)  {
			cout << (a * 2 + (b - 1) * 2);
		} else {
			for (int i=2;i<=a;i++) {
				if (a % i == 0) {
					cout << (a + i + 2 * (b -1));
					break;
				}
			}
		}
		cout << '\n';
	}

	return 0;
}