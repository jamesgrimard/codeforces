// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();



	int tt; cin >> tt;
	while (tt--) {
		int n ; cin>> n;
		vector<pair<int,int>> a;
		for (int i=2;i<=sqrt(n);i++) { 
			int cnt = 0;

			while (n % i == 0) {
				n/=i;
				cnt++;
			}
			if (cnt == 0) continue;
			pair<int,int> p;
			p.second = i; p.first = cnt;
			if (p.second > 0) a.push_back(p);
		}
		if (n > 1) {
			pair<int,int> p;
			p.second = n; p.first = 1;
			if (p.second > 0) a.push_back(p);
		}
		sort(begin(a),end(a));
		
		int sum = 0 , q = 0;
		for (int i=0;i<size(a);i++) {
			int tally = 1;
			for (int j=i;j<size(a);j++) {
				tally *= a[j].second;
			}
			sum += (tally*(a[i].first-q));
			q += (a[i].first-q);
		}
		cout << sum << '\n';
	}

	return 0;
}

