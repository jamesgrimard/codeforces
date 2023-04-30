// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;

	vector<pair<int,int>> a(n+1,{-1,-1});
	a[0].first = 0 , a[0].second = 0;
	for (int i=0;i<2*n;i++) {
		int x; cin >> x;
		(a[x].first == -1) ? a[x].first = i : a[x].second = i;
	}
	long long cnt = 0;
	for (int i=1;i<=n;i++) {
		cnt += abs(a[i].first-a[i-1].first);
		cnt += abs(a[i].second-a[i-1].second);
	}
	cout << cnt << '\n';

	return 0;
}