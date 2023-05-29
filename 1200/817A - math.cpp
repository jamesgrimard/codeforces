// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y0,x0,y1,x1,y,x; cin >> y0 >> x0 >> y1 >> x1 >> y >> x;
	bool ans = 1;
	int Y = abs(y0-y1) , X = abs(x0-x1);
	if (Y % y != 0 || X % x != 0) ans = 0;
	Y /= y , X /= x;
	if (Y % 2 != X % 2) ans = 0;
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}

		