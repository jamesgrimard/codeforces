// github.com/jamesgrimard/codeforces

#include <bits/stdc++.h> 

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	long long mx = 1000000006;
	bool F = 0;
	while (F == 0) {
		mx++;
		F = 1;
		for (int j=2;j*j<=mx;j++) if (mx % j == 0) {F = 0; break;}
	}


	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<pair<int,int>> a(n);
		long long I , mn = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i;
			if (a[i].first < mn || i == 0) {
				mn = a[i].first , I = i;
			}
		}

		
		(I % 2 == 0) ? cout << n/2 << '\n' : cout << ceil((double)n/2.0) << '\n';
		for (int i=0;i<n;i++) {
			if (i == I) continue;
			if (a[i].second%2 != I%2) cout << I+1 << " " << a[i].second+1 << " " << a[I].first << " " << mx << '\n';
		}


	}
	return 0;	
}