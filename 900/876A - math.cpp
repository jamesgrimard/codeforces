// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;cin >> n;

	int a , b , c ; cin >> a >>  b >> c;
	
	if (n == 1) {
		cout << 0;
	} else if (n == 2) {
		cout << min(a,b);
	} else {
		cout << (min(a,b) + (n-2)*min(a,min(b,c)));
	}
	

	return 0;
}