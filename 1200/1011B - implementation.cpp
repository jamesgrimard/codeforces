// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int k,n; cin >> k >> n;
	vector<pair<int,int>> a(101);
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x].first++;
	}
	sort(rbegin(a),rend(a));
	bool ans = 1;
	for (int i=0;i<k;i++) {
		int mx = 0 , index = -1;
		for (int j=0;j<=100;j++){
			if (a[j].first == 0) break;
			if (a[j].first/(a[j].second+1) > mx) {
				mx = a[j].first/(a[j].second+1);
				index = j;
			}
		}
		if (index == -1) {
			ans = 0;
			break;
		} else {
			a[index].second++;
		}
	}
	if (ans == 0) {
		cout << 0;
	} else {
		int mn = 100;
		for (int i=0;i<=100;i++) {
			if (a[i].second > 0) mn = min(mn,a[i].first/a[i].second);
		}
		cout << mn;
	}
	

	return 0;	
}