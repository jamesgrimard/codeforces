// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n,h,m;
	cin >> n >> h >> m;

	vector<vector<int>> a(m);
	for (int i=0;i<m;i++) {
		a[i].resize(3);
		for (int j=0;j<3;j++) {
			cin >> a[i][j];
		}
	}

	vector<int> b(n,h);
	for (int i=0;i<m;i++) {
		for (int j=a[i][0]-1;j<=a[i][1]-1;j++) {
			if (b[j] > a[i][2]) {
				b[j] = a[i][2];
			}
		}
	}

	int sum(0);
	for (int i=0;i<size(b);i++) {
		sum += (b[i]*b[i]);
	}

	cout << sum;
	cout << endl;
	
	return 0;
}