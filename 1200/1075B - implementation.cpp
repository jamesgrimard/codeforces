// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;
	vector<pair<int,bool>> a(n+m);
	vector<int> l(n+m),r(n+m),p(n+m);
	for (int i=0;i<n+m;i++) cin >> a[i].first;
	for (int i=0;i<n+m;i++) cin >> a[i].second;

	int mark = 0;
	for (int i=0;i<n+m;i++) {
		if (a[i].second == 1) mark = a[i].first;
		if (a[i].second == 0 && mark != 0) l[i] = a[i].first-mark;
	}
	mark = 0;
	for (int i=n+m-1;i>=0;i--) {
		if (a[i].second == 1) mark = a[i].first;
		if (a[i].second == 0 && mark != 0) r[i] = abs(a[i].first-mark);
	}
	vector<int> o(m);
	int tally = -1;
	for (int i=0;i<n+m;i++) {
		if ((l[i] <= r[i] || r[i] == 0) && l[i] != 0) {
			o[tally]++;
		}
		if (a[i].second == 1) tally++;
	}
	tally = m;
	for (int i=n+m-1;i>=0;i--) {
		if ((r[i] < l[i] || l[i] == 0) && r[i] != 0) {
			o[tally]++;
		}
		if (a[i].second == 1) tally--;
	}
	
	for (auto v:o) cout << v << " ";

	return 0;	
}