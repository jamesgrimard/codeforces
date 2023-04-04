// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
	sort(rbegin(a),rend(a));
	for (int i=1;i<n;i++) {
		if (a[i].first == a[i-1].first && a[i].second < a[i-1].second) {
			swap(a[i],a[i-1]);
			i = max(0, i-2);
		}
	}
	int cnt = 1;
	for (int i=k;i<n;i++) {
		if (a[i].first == a[i-1].first && a[i].second == a[i-1].second) {
			cnt++;
		} else {
			break;
		}
	}
	for (int i=k-2;i>=0;i--) {
		if (a[i].first == a[i+1].first && a[i].second == a[i+1].second) {
			cnt++;
		} else {
			break;
		}
	}

	cout << cnt;

	return 0;
}
