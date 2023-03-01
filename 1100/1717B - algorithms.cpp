// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int _mod(int a, int b) {
	return ((a%b)+b)%b;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , k , y , x; cin >> n >> k >> y >> x;
		vector<vector<bool>> a(n);
		for (int i=0;i<n;i++) a[i].resize(n);
		for (int d=0;d<n;d++) {
			a[_mod(y-1-d,n)][_mod(x-1+d,n)] = 1;
			for (int i=k;i<n;i+=k) {
				a[_mod(y-1-d-i,n)][_mod(x-1+d,n)] = 1;
				a[_mod(y-1-d+i,n)][_mod(x-1+d,n)] = 1;	
			}
		}

		
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) (a[i][j] == 1) ? cout << 'X' : cout << '.' ;
			cout << '\n';
		}
		
	}

	return 0;
}

