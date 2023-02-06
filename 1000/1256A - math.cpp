// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ;cin >> tt;
	while (tt--) {
		long long a , b , n , S; cin >> a >>b >> n>> S;
		((S % n <= b) && (a*n >= S || S - a*n <= b)) ? cout << "YES\n" : cout << "NO\n"; 
	}


	return 0;
}
