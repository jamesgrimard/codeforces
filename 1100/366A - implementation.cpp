// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int k; cin >> k;
	int mn = 0 , mn1 = 0, mn2 = 0 , index = 0;
	for (int i=0;i<4;i++) {
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		if (i == 0 || mn > min(x1,y1) + min(x2,y2)) {
			index = i + 1;
			mn = min(x1,y1) + min(x2,y2);
			mn1 = min(x1,y1); mn2 = min(x2,y2);
		}
	}

	if (mn <= k) {
		cout << index << " ";
		if (mn1 < mn2) {
			cout << mn1 << " " << k - mn1;
		} else {
			cout << k-mn2 << " " << mn2;
		}
	} else {
		cout << -1;
	}


	return 0;
}