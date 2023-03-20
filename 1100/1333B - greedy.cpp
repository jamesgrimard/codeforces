// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int n ;cin >> n;
		vector<int> a(n),b(n);
		vector<bitset<3>> ref(n);
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i == 0) {
				if (a[i] == 0) ref[i+1][0] = 1;
				if (a[i] == 1) ref[i+1][1] = 1;
				if (a[i] == -1) ref[i+1][2] = 1; 
			} else if (i < n-1) {
				ref[i+1] = ref[i];
				if (a[i] == 0) ref[i+1][0] = 1;
				if (a[i] == 1) ref[i+1][1] = 1;
				if (a[i] == -1) ref[i+1][2] = 1; 
			}
		}
		bool ans = 1;
		for (int i=0;i<n;i++) {
			cin >> b[i];
			if (b[i] > a[i] && ref[i][1] == 0) ans = 0;
			if (b[i] < a[i] && ref[i][2] == 0) ans = 0;
		}
		(ans == 1) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

