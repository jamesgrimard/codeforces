// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int gcd(int x , int y) {
	if (x % y == 0) return y;
	return gcd(y,(x%y));
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , w , y ; cin >> n >> w >> y;

	int p = n-w;

	int puppets = ceil(n*((float) y/100.00));
	puppets -= w;

	cout << max(puppets,0);

	return 0;
}

