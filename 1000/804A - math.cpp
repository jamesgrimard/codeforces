// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	(n % 2 == 1) ? n = n/2 : n = n/2-1;
	cout << n;

	return 0;
}



