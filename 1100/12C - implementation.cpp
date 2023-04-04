// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	vector<pair<int,string>> b;
	for (int i=0;i<k;i++) {
		string s; cin >> s;
		if (i == 0) {
			pair<int,string> p;
			p.second = s; p.first = 1;
			b.push_back(p);
			continue;
		}
		for (int j=0;j<b.size();j++) {
			if (s == b[j].second) {
				b[j].first++;
				break;
			} else if (j == b.size()-1) {
				pair<int,string> p;
				p.second = s; p.first = 1;
				b.push_back(p);
				break;
			}
		}
	}
	sort(begin(a),end(a));
	sort(rbegin(b),rend(b));
	//for (auto v:b) cout << v.first << " " << v.second << '\n';
	int mn = 0 , mx = 0 , p = 0 , P = n-1;
	for (int i=0;i<b.size();i++) {
		mn += b[i].first * a[p];
		mx += b[i].first * a[P];
		p++; P--;
	}

	cout << mn << " " << mx;

	return 0;
}
