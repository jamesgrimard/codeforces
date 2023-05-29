// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;

	int mn,mx;

	if (k == 0 || k == n) {
		cout << 0 << " " << 0;
		return 0;
	}

	mn = 1;
	
	int taken = min(k,n/3)*3;
	int people = k - min(k,n/3);
	int spots = n - taken;
	if (spots > people && people > 0) {
		mx = min(k,n/3)*2 + 1;
	} else {
		people = max(people-spots,0);
		mx = min(k,n/3)*2 - people;
	}

	cout << mn << " " << max(1,mx);

	return 0;	
}

		