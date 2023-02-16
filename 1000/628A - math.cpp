// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , b , p; cin >> n >> b >> p;

	cout << (pow(2.0,log(n)/log(2))-1) * (2*b+1) << " " << n * p;

	return 0;
}



