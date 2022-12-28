// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;

	while (tt--) {

		int n , x; cin >> n >> x;

		vector<int>a(n);

		for(int i=0;i<n;i++) cin >> a[i];

		sort(a.begin(),a.end());

		for(int i=0;i<n;i++){
			if (a[i] <= x+1) {
				if (i == 0 || a[i-1] != a[i]) x++;
			}
		}

		cout << x << '\n';
	}

	return 0;
}

