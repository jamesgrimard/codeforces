// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].second >> a[i].first;
	sort(rbegin(a),rend(a));
	int p = 1 , cnt = 0;
	for (int i=0;i<min(p,n);i++) {
		p += a[i].first;
		cnt += a[i].second;
	}

	cout << cnt;

	return 0;
}
