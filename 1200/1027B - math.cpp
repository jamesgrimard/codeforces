// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , q; cin >> n >> q;
	for (int i=0;i<q;i++) {
		long long y,x; cin >> y >> x;
		long long m = n * n / 2LL;
		long long k = n / 2LL , p = x / 2LL;
		if (n % 2LL) k++;
		if (x % 2LL) p++;

		if (n % 2LL == 0) {
			if (y % 2LL == x % 2LL) {
				cout << k * (y-1) + p << '\n';
			} else {
				cout << k * (y-1) + p + m<< '\n';
			}	
		} else {
			m++;
			if (y % 2LL == x % 2LL) {
				cout << k * (y-1) - ((y-1)/2LL) + p << '\n';
			} else {
				if (x%2LL)p--;
				cout << k * (y-1) - ((y-1)/2LL) + p + m<< '\n';
			}
			
		}
		

	}

	return 0;	
}