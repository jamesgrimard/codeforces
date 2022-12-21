// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<vector<int>> a(5);
	for(int i=0;i<5;i++){
		a[i].resize(5);
		for(int j=0;j<5;j++){
			if (i == 0 || i == 4 || j == 0 || j == 4) {
				a[i][j] = 0;
			} else {
				cin >> a[i][j];
			}
		} 
	}

	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++) {
			if ((a[i][j] + a[i-1][j] + a[i][j-1] + a[i+1][j] + a[i][j+1]) % 2 == 0) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << '\n';
	}

	return 0;
}