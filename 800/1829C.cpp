#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >>n;
		pair<int,string> a[n]; for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
		sort(a,a+n,[](const pair<int,string>& a, const pair<int,string>& b) {
				return a.first < b.first;
			}
		);
		int A = 1e6 , B = 1e6 , C = 1e6;
		for (auto x : a) {
			if (x.second == "11") C = min(C,x.first);
			if (x.second == "10") A = min(A,x.first);
			if (x.second == "01") B = min(B,x.first);
		}
		((A == 1e6 || B == 1e6) && C == 1e6) ? cout << "-1\n" : cout << min(A+B,C) << '\n';
	}

	return 0;
}