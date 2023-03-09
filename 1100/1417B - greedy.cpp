// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n , T; cin >> n >> T;
		vector<pair<int,int>> a;
		vector<bool> b(n);
		for (int i=0;i<n;i++) {
			pair<int,int> p;
			cin >> p.first;
			p.second = i;
			a.push_back(p);
		}
		sort(begin(a),end(a));
		pair<int,int> p;
		p.first = 0; p.second = n;
		a.push_back(p);
		bool flag = 0 , F = 0;
		for (int i=0;i<n;i++) {
			if (flag == 1 && a[i].first == a[i-1].first && a[i].first + a[i-1].first == T) {
				if (F == 0) b[a[i].second] = 1;
				F = ! F;
				continue; 
			}
			if (flag == 1) b[a[i].second] = 1;
			if (a[i].first + a[i+1].first >= T) flag = 1;
		}

		for (auto v : b) cout << v << " ";
		cout << '\n';
	}	

	
	return 0;
}

