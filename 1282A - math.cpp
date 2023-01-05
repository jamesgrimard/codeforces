// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--){
		int a , b ,c ,d; cin >> a >> b >> c >> d;
		int total_time = abs(a-b), l = min(a,b) , r = max(a,b);
		if (c >= l && c <= r) {
			total_time -= (min(c+d,r)-max(c-d,l));
		} else if (c < l && c+d > l) {
			total_time -= (min(c+d,r)-l);
		} else if (c > r && c-d < r) {
			total_time -= (r-max(c-d,l));
		}
		cout << total_time << '\n';
	}
	return 0;
}

