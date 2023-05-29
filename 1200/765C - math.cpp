// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long k , a , b; cin >> k >> a >> b;

	long long p = max(a,b) / k;


	if ((max(a,b)%k != 0 && min(a,b) >= k) || max(a,b)%k == 0) {
		cout << p + min(a,b)/k;
	} else {
		cout << -1;
	}

	return 0;	
}

		