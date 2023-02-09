// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;
	long long mn = n+1 , index = 0;
	for (int i=0;i<k;i++) {
		long long x; cin >> x;
		if ((n % x) < (n % mn) || i == 0) {
			mn = x; index = i + 1;
		}
	}
	cout << index << " " << n / mn;

	return 0;
}



