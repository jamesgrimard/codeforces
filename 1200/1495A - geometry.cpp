// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> X,Y;
		for (int i=0;i<2*n;i++) {
			int x,y; cin >> x >> y;
			if (x == 0) Y.push_back(abs(y));
			if (y == 0) X.push_back(abs(x));
		}
		sort(begin(X),end(X));
		sort(begin(Y),end(Y));
		double sum = 0;
		for (int i=0;i<n;i++) {
			sum += sqrt((double)X[i]*(double)X[i]+(double)Y[i]*(double)Y[i]);
		}
		cout << setprecision(12) << sum << '\n';
	}	

	return 0;
}