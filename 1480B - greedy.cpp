// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int AP, HP , n ; cin >> AP >> HP >> n;

		vector<pair<int,int>> a(n);

		for (int i=0;i<n;i++) {
			pair<int,int> p;
			cin >> p.first;
			a[i] = p;
		}
		
		for (int i=0;i<n;i++) cin >> a[i].second;
		
		sort(a.begin(),a.end());

		bool ans = 1;

		for (int i=0;i<n;i++) {
			int s1 = a[i].second / AP , s2 = HP / a[i].first;
			if (a[i].second % AP != 0) s1++; if (HP % a[i].first != 0) s2++;
			HP -= s1 * a[i].first;
			a[i].second -= s1 * AP;
			if (s1 > s2) ans = 0;
			if (HP < 1 && i != n-1) ans = 0;
		}
		(ans == 1) ? cout << "YES" : cout << "NO";
		cout << '\n';
	}


	return 0;
}

