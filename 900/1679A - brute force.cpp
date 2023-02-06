// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--){

		long long n ; cin >> n;

		if (n % 2 == 0 && n >= 4) {
			long long min = n/6 , max = n/4;
			if (n%6 != 0) min++;
			
			cout << min << " " << max;
		} else {
			cout << -1;
		}
		cout << '\n';
	}


	return 0;
}

