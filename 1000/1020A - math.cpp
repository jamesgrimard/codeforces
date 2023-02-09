// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int x , y , lowest , highest , n; cin >> x >> y >> lowest >> highest >> n;
	for (int i=0;i<n;i++) {
		int x1,y1,x2,y2;cin >> x1 >> y1 >> x2 >> y2;
		int sum = 0;
		if (x1 != x2) {
			if (y1 > highest || y1 < lowest) {
				sum += (min(abs(highest-y1),abs(lowest-y1))+abs(x1-x2));
				(abs(highest-y1) < abs(lowest-y1)) ? y1 = highest : y1 = lowest;
			} else {
				sum += abs(x1-x2);
			}
		}
		sum += abs(y2-y1);
		cout << sum << '\n';
	}

	return 0;
}



