#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n,w; cin >> n >> w;
		long long floor = w / 2LL;
		if (w % 2LL) floor++;
		vector<pair<int,int>> a(n);
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
			a[i].second = i;
		}
		sort(begin(a),end(a));
		vector<long long> s(n);
		for (int i=n-1;i>=0;i--) {
			s[i] = a[i].first;
			if (i!=n-1) s[i] += s[i+1];
		}
		long long sum = 0;
		int ans = -1 , L, R = -1;
		for (int i=n-1;i>=0;i--) {
			if (a[i].first > w) continue;
			if (R == -1) R=i;
			sum += a[i].first;
			if (sum >= floor && sum <= w) {
				L = i;
				ans = R - L + 1;
				break;
			}
		}
		cout << ans << '\n';
		if (ans != -1) {
			for (int i=L;i<=R;i++) cout << a[i].second + 1<< " ";
			cout << '\n';
		}
	}	

	return 0;
}
