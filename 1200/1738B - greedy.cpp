// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--) {
		int n , m; cin >> n >> m;
		bool ans = 1;
		vector<long long> a(n);
		for (int i=0;i<m;i++) {
			cin >> a[i];
			if (i > 1 && a[i] - a[i-1] < a[i-1] - a[i-2]) ans = 0;
		}
		if (m > 1 && (a[1]-a[0])*(n-m) < a[0] - (a[1]-a[0])) ans = 0;
		ans == 0 && m != 1 ? cout << "No\n" : cout << "Yes\n";
	}

	return 0;
}