// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a ,b , x , y; cin >> a >> b >> x >> y;
	long long k = gcd(x,y);
	x /= k ; y /= k;
	cout << min(a/x,b/y);

	return 0;
}



