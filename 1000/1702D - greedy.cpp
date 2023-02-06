// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string s; cin >> s;
		int k; cin >> k;
		vector<pair<char,int>> a(size(s));
		for (int i=0;i<size(s);i++) {
			a[i].first = s[i]; a[i].second = i;
		}
		sort(begin(a),end(a));
		vector<pair<int,char>> b;
		int total = 0;
		for (int i=0;i<size(s);i++) {
			if (total + (a[i].first-96) > k) break;
			pair<int,char> p;
			p.first = a[i].second; p.second = a[i].first;
			b.push_back(p);
			total += (a[i].first-96);
		}
		sort(begin(b),end(b));
		for (int i=0;i<size(b);i++) cout << b[i].second;
		cout << '\n';
	}



	return 0;
}

