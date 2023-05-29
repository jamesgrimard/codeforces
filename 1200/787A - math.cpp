// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int m,c,n,b; cin >> m >> c >> n >> b;

	vector<int> a(2000000);
	int t = 0;
	int ans = -1;
	while (t <= 1000) {
		a[m*t+c]++;
		a[n*t+b]++;
		if (a[n*t+b] > 1) {
			ans = n*t+b;
			break;
		}
		if (a[m*t+c] > 1) {
			ans = m*t+c;
			break;
		}
		t++;
	}
	cout << ans;
	return 0;	
}

		