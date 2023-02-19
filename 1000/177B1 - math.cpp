// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;
	long long sum = 0;
	for (int i=2;i<=n;i++) {
		while ((n % i == 0 || n == 1) && n > 0) {
			sum += n;
			n/=i;
		}
	}
	cout << sum << '\n';

	return 0;
}



