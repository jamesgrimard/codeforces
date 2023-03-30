// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int y1 , x1 , y2 , x2; cin >> y1 >> x1 >> y2 >> x2;

	// rook
	if (y1 == y2 && x1 == x2) {
		cout << 0;
	} else if (y1 == y2 || x1 == x2) {
		cout << 1;
	} else {
		cout << 2;
	}
	cout << " ";

	//bishop
	if ((abs(y1-y2) + abs(x1-x2)) % 2 == 0) {
		if (y1 == y2 && x1 == x2) {
			cout << 0;
		} else if (abs(y1-y2) == abs(x1-x2)) {
			cout << 1;
		} else {
			cout << 2;
		}
	} else {
		cout << 0;
	}
	cout << " ";


	// king

	cout << max(abs(x1-x2),abs(y1-y2));


	return 0;
}