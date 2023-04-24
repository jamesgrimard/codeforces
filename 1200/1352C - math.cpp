// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k ;cin >> n >> k;
		int p = ceil((double)k/(double)(n-1))-1 + k;
		cout << p << '\n';
	}

	return 0;
}