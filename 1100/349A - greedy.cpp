// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<int> a(101);
	bool ans = 1;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x == 25) {
			a[25]++;
		} else if (x == 50 && a[25] > 0) {
			a[25]--;
			a[50]++;
		} else if (x == 100) {
			if (a[50] > 0 && a[25] > 0) {
				a[25]--;
				a[50]--;
			} else if (a[25] > 2) {
				a[25] -= 3;
			} else {
				ans = 0 ;
			}
			a[100]++;
		} else {
			ans = 0;
		}
	}

	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}