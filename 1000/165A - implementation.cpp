// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	
	vector<int> y(n) , x(n);
	for (int i=0;i<n;i++) cin >> y[i] >> x[i];

	int cnt = 0;
	for (int i=0;i<n;i++) {
		bool t = 0, b = 0 , l = 0 , r = 0;
		for (int j=0;j<n;j++) {
			if (y[j] < y[i] && x[i] == x[j]) t = 1;
			if (y[j] > y[i] && x[i] == x[j]) b = 1;
			if (y[i] == y[j] && x[i] > x[j]) l = 1;
			if (y[i] == y[j] && x[i] < x[j]) r = 1;
		}
		if (t == 1 && b == 1 && l == 1 && r == 1) cnt++;
	}

	cout << cnt;

	return 0;
}



