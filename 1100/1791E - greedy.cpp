// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int tt; cin >> tt;
	while (tt--){
		int n; cin >> n;
		vector<int> a(n);
		long long mn = 0 , sum = 0 , ng = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i] < 0) ng++;
			if (i == 0 || abs(a[i]) < mn) mn = abs(a[i]);
			sum += abs(a[i]);
		}
		(ng % 2 == 0) ? cout << sum << '\n' : cout << sum - 2*mn << '\n';
	}

	return 0;
}

