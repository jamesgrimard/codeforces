// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >> n;
	vector<int> a(n+1);
	vector<pair<int,int>> r(1001);
	for (int i=2;i<=n;i++) {
		cin >> a[i];
		r[a[i]].first++;
	}
	bool ans = 1;
	for (int i=n;i>=2;i--) {
		if (r[i].first == 0) r[a[i]].second++;
	}
	for (int i=1;i<=1000;i++) {
		if (r[i].first > 0 && r[i].second < 3) ans = 0;
	}
	

	ans == 1 ? cout << "Yes\n" : cout << "No\n";

	return 0;	
}

		