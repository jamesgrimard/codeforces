// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;
	
	if (n % 2 == 1 && n > 3) {
		cout << 1 << " " << (n - 3LL) /2LL << '\n';
	} else {
		cout << "NO\n";
	}


	return 0;
}