// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
	if (a % b == 0) return b;
	return gcd(b,a%b);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n; cin >> n;

		int	a = 2 , b = n-3 , c = 1;

		for (int i=0;i<n-3;i++) {
			if ((a + i) + (b - i) + gcd(a+i,b-i) == n) {
				a += i; b -= i; c = gcd(a,b);
				break;
			} 
		}
		
		cout << a << " " << b << " " << c << '\n';
	}

	return 0;
}

