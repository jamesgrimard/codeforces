// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;
	long long sum = 0;
	for (long long i=1;i<=n;i++) {
		int cnt = i;
		long long s = 1;
		while (cnt > 0) {
			s *= 2;
			cnt--;
		}
		sum += s;
	}
	cout << sum;
	



	return 0;
}

