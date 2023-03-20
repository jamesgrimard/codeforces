// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int a ,b , c ,d ; cin >> a >> b >> c >> d;
		int x,y,x1,y1,x2,y2; cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		bool a1 = 0 , a2 = 0;
		if (x2 - x1 >= abs(a-b)) a1 = 1;
		if (y2 - y1 >= abs(c-d)) a2 = 1;
		if (b > a && abs(b-a) > abs(x2-x)) a1 = 0;
		if (a > b && abs(a-b) > abs(x1-x)) a1 = 0;
		if (c > d && abs(d-c) > abs(y1-y)) a2 = 0;
		if (d > c && abs(d-c) > abs(y2-y)) a2 = 0;
		if ((a > 0 || b > 0) && x2 - x1 == 0) a1 = 0;
		if ((c > 0 || d > 0) && y2 - y1 == 0) a2 = 0;
		(a1 == 1 && a2 == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

