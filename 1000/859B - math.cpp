// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	int k = sqrt(n) , l = n / k , j = 0;
	if (n % k != 0) j = 2;

	cout << k * 2 + l * 2 + j;





	return 0;
}



