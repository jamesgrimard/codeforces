// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a , b; cin >> a >> b;
	long long sum = 0 , r = 1;

	while (r != 0) {
		sum += a / b;
		r = a % b;
		a = b;
		b = r;
	}

	cout << sum;


	return 0;
}

