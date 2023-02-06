// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--)  {

		int y,x; cin >> y >> x;

		vector<vector<int>> a(y);

		for (int i=0;i<y;i+=2) {
			a[i].resize(x); a[i+1].resize(x);
			for(int j=0;j<x;j+=2){
				if (j/2 % 2 == i/2 % 2) {
					a[i][j] = 1; a[i][j+1] = 0;
					a[i+1][j] = 0; a[i+1][j+1] = 1;
				} else {
					a[i][j] = 0; a[i][j+1] = 1;
					a[i+1][j] = 1; a[i+1][j+1] = 0;
				}	
			}
		}
		for (int i=0;i<y;i++) {
			for (int j=0;j<x;j++) {
				cout << a[i][j] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}

