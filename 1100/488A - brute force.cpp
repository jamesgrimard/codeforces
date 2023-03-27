// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	int cnt = 0;
	bool f = 0;
	while (f == 0) {
		n++;
		cnt++;
		long long N = n;
		if (N < 0) N *= -1;
		while (N > 0) {
			if (N % 10 == 8) f = 1;
			N /= 10;
		}		
	}

	cout << cnt;

	return 0;
}

