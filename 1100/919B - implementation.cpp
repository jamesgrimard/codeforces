// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;

	int cnt = 0 , p = 10;

	while (cnt < n) {
		p += 9;
		int tally = 0 , P = p;
		while (P > 0) {
			tally += (P % 10);
			P /= 10;
		}
		if (tally == 10) cnt++;
	}

	cout << p;


	return 0;
		
}

