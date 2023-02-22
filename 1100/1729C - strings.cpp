// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
const int n1=1e9+7;

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		vector<pair<char,int>> a;
		char f = s[0] , l = s[size(s)-1];
		for (int i=0;i<size(s);i++) {
			if (f <= l) {
				if (s[i] < f || s[i] > l) continue;
			} else {
				if (s[i] > f || s[i] < l) continue;
			}
			pair<char,int> p;
			p.first = s[i];
			p.second = i+1;
			a.push_back(p);
		}
		int sum = 0 , la = a[size(a)-1].second;
		if (f > l) a[0].second = 300001;
		sort(begin(a),end(a));
		for (int i=1;i<size(a);i++) sum += abs(a[i].first - a[i-1].first);
		cout << sum << " " << size(a) << '\n';
		if (f <= l) {
			for (auto v:a) cout << v.second % 300000 << " ";
		} else {
			bool f1 = 0;
			for (int i=size(a)-1;i>=0;i--) {
				if (a[i].second == la && i != 0) {f1 = 1;continue;}
				cout << a[i].second % 300000 << " ";
			}
			if (f1 == 1) cout << la;
		}
		
		cout << '\n';

	}
		

	return 0;
}

