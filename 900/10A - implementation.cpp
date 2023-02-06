// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , p1,p2,p3 , t1 , t2; cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

	int sum = 0 , l = 0;

	for (int i=0;i<n;i++) {
		int x,y; cin >> x >> y;
		if (i==0) {
			l=y;
			sum += (y-x)*p1;
			continue;
		}

		sum += (y-x)*p1;

		int d = x-l;

		if (d <= t1) {
			sum += d*p1;
		} else if (d <= t1+t2) {
			sum += (t1*p1 + (d-t1)*p2);
		} else {
			sum += (t1*p1 + t2*p2 + (d-t1-t2)*p3); 
		}


		l = y;
	}

	cout << sum;

	return 0;
}

