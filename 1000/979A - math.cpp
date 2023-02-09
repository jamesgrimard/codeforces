// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	if (n == 0) {
		cout << 0; return 0;
	}
	n++;
	long long p = n;
	if (p % 2 == 0) p /= 2;
	cout << p;
	return 0;
}



