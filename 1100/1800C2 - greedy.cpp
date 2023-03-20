// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<pair<int,int>> a;
		int cnt = 0;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			if (x == 0) {
				cnt++;
				continue;
			}
			pair<int,int> p;
			p.first = x; p.second = cnt;
			a.push_back(p);
		}
		sort(rbegin(a),rend(a));
		vector<int> b(cnt);
		long long sum = 0 ,tally =0;
		for (int i=0;i<size(a);i++) {
			for (int j=a[i].second;j<size(b);j++) {
				if (a[i].first > b[j]) {
					tally++;
					b[j] = a[i].first;
					sum += b[j];
					break;
				}
			}
			if (tally == cnt) break;
		}
		
		cout << sum << '\n';
	}

	return 0;
		
}

