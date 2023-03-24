// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	
	vector<pair<int,int>> a(n);
	
	int L = 0 , R = 0;
	
	for (int i=0;i<n;i++) {
		cin >> a[i].first >> a[i].second;
		L += a[i].first;
		R += a[i].second;
	}

	int mxL = 0 , mxR = 0 , Ri = 0 , Li = 0;

	for (int i=0;i<n;i++) {
		if (a[i].second - a[i].first > mxL) {
			mxL = a[i].second - a[i].first;
			Li = i + 1;
		}
		if (a[i].first - a[i].second > mxR) {
			mxR = a[i].first - a[i].second;
			Ri = i + 1;
		}
	}

	(L + mxL > R + mxR) ? cout << Li : cout << Ri;

	return 0;
}

