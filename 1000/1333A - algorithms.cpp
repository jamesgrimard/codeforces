// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int y , x; cin >> y >> x;
		bool flag = 1;
		for (int i=0;i<y;i++){
			for (int j=0;j<x;j++){
				if ((i == 0 && j == 0) || (x % 2 == 1 && y % 2 == 0 && i == y-1 && j == x-1)) {
					cout << "B"; continue;
				}
				if (x % 2 == 0) {
					(flag == 1) ? cout << "B" : cout << "W";
					if (j != x-1) flag = ! flag;
				} else {
					(flag == 1) ? cout << "W" : cout << "B";
					flag = ! flag;
				}
			}
			cout << '\n';
		}
	}

	return 0;
}
