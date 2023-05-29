// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , x, y; cin >> n >> x >> y;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	if (x > y) {
		cout << n << '\n';
	} else {
		int cnt = 0;
		for (int i=0;i<n;i+=2) {
			if (a[i] <= x) cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;	
}