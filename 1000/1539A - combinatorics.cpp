// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n , x , t; cin >> n >> x >> t;
		if (x > t) {
			cout << 0;
		} else {
			long long k;
			if (t >= (n-1)*x) {
				k = ((n-1)*(n-1)+(n-1))/2;
			} else {
				k = (n-(t/x+1))*(t/x) + ((t/x)*(t/x)+(t/x))/2;
			}
			cout << k;
		}
		cout << '\n';
	}

	return 0;
}
