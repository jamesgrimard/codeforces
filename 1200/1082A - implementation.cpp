// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n,x,y,k; cin >> n >> x >> y >> k;
		if (abs(x-y) % k == 0) {
			cout << abs(x-y)/k << '\n';
			continue;
		}
		int a = -1 , b = -1;
		if ((y-1) % k == 0) a = (y-1)/k + ceil((double)(x-1)/(double)k);
		if ((n-y) % k == 0) b = (n-y)/k + ceil((double)(n-x)/(double)k);
		if (min(a,b) != -1) {
			cout << min(a,b) << '\n';
		} else {
			if (a != -1) {
				cout << a << '\n';
			} else {
				cout << b << '\n';
			}
		}

	}	

	return 0;	
}