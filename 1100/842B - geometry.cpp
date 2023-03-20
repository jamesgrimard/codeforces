// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	float r , d; cin >> r >> d;
	float n , cnt = 0; cin >> n;
	for (float i=0;i<n;i++) {
		float x,y,rp; cin >>x >> y >> rp;
		float k = sqrt((float)(x*x + y*y));
		if (k - rp >= r-d && k + rp <= r) cnt++;
	}

	cout << cnt;

	return 0;
		
}

