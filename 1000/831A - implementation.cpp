// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	vector<int> a(n);
	bool f1 = 0 , f2 = 0 , f3 = 0 , ans = 1;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=1;i<n;i++) {
		if (a[i] < a[i-1]) {
			f1 = 1; f2 = 1;
		} else if (a[i] == a[i-1]) {
			f1 = 1;
		}
		if (a[i] > a[i-1] && f1 == 1) ans = 0;
		if (a[i] == a[i-1] && f2 == 1) ans = 0; 
	}
	(ans == 1) ? cout << "YES" : cout << "NO";

	return 0;
}



