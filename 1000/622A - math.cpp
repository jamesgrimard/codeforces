// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;

	long long k = (-1 + sqrt(1+8*n)) / 2;

	long long check = (k * k + k) / 2;

	(n - check == 0) ? cout << k : cout << n - check;


	
	return 0;
}
