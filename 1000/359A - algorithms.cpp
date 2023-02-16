// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int y , x; cin >> y >> x;
	bool f = 0;
	for (int i=0;i<y;i++) {
		for (int j=0;j<x;j++) {
			int a; cin  >> a;
			if ((i == 0 || i == y-1) && (j == 0 || j == x-1)) continue;
			if ((i == 0 || i == y-1 || j == 0 || j == x-1) && a == 1) f = 1;
		}
	}

	(f == 1) ? cout << 2 : cout << 4;
	
	return 0;
}



