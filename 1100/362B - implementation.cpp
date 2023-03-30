// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n, m; cin >> n >> m;
	vector<int> a(m);
	for (int i=0;i<m;i++) cin >> a[i];
	sort(begin(a),end(a));
	bool ans = 1;
	int tally = 0;
	if (m == 0) {
		cout << "YES\n";
		return 0;
	}
	for (int i=0;i<m-1;i++) {
		if (a[i] + 1 == a[i+1]) {
			tally++;
		} else {
			tally = 0;
		}
		if (tally == 2) ans = 0;
	}	
	if (a[0] == 1 || a[m-1] == n) ans = 0;
	ans == 0 ? cout << "NO\n" : cout << "YES\n";

	return 0;
}