// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n ; cin >>n ;
		vector<int> a(n*2);
		int e = 0 , o = 0;
		for (int i=0;i<n*2;i++) {
			cin >> a[i];
			(a[i] % 2 == 0) ? e++ : o++;
		}
		bool f = 0 , F = 0 , S = 0 , T = 0;
		if (o % 2 == 1) f = 1;
		int cnt = 0;
		vector<int> O,E;
		for (int i=0;i<n*2;i++) {
			if (F == 0) {
				F = 1; 
				T = a[i] % 2;
				continue;
			}
			if (f == 1 && S == 0) {
				if (a[i] % 2 != T) {
					S = 1;
					continue;
				}
			}
			if (f == 0 && S == 0 && a[i] % 2 == T) {
				S = 1;
				continue;
			}
			(a[i] % 2 == 0) ? E.push_back(i+1) : O.push_back(i+1);
		}
		for (int i=0;i<size(E);i+=2) cout << E[i] << " " << E[i+1] << '\n';
		for (int i=0;i<size(O);i+=2) cout << O[i] << " " << O[i+1] << '\n';
		
	}
	
	return 0;
}

