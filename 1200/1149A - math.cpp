// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int cnt1 = 0 , cnt2 = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		(x == 1) ? cnt1++ : cnt2++;
	}
	if (cnt2>0) cout << 2 << " ";
	if (cnt1 % 2 == 1) {
		for (int i=0;i<cnt1;i++) cout << 1 << " ";
		for (int i=0;i<cnt2-1;i++) cout << 2 << " ";
	} else {
		for (int i=0;i<cnt1-1;i++) cout << 1 << " ";
		for (int i=0;i<cnt2-1;i++) cout << 2 << " ";
		if (cnt1 > 0) cout << 1;
	}

	return 0;
}