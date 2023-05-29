// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , x , y; cin >> n >> x >> y;
	int t = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	
	int cnt = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == 1) {
			if (x > 0) {
				x--;
			} else if (y > 0) {
				t++;
				y--;
			} else if (t > 0) {
				t--;
			} else {
				cnt++;
			}
		} else {
			if (y > 0) {
				y--;
			} else {
				cnt+=2;
			}
		}
	}
	cout << cnt;

	return 0;	
}

		