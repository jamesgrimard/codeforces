// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long x , y; cin >> x >> y;
	long long k = y/x;
	if (y % x != 0) k++;
	cout << k;

	return 0;
}



