// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b , c , n; cin >> a >> b >> c >> n;
	if (a+b-c >= n || c > a || c > b) {
		cout << -1;
	} else {
		cout << n - (a + b - c);
	}



	return 0;
}



