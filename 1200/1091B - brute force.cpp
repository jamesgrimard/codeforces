// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<pair<int,int>,int> m;
	vector<pair<int,int>> a(n),b(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
	for (int i=0;i<n;i++) cin >> b[i].first >> b[i].second;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			pair<int,int> p;
			p.first = a[i].first + b[j].first;
			p.second = a[i].second + b[j].second;
			m[p]++;
		} 
	}
	pair<int,int>p;
	int mx = 0;
	for (auto [k,v]:m){
		if (v > mx) {
			mx = v;
			p = k;
		}
	}
	cout << p.first << " " << p.second;
	return 0;	
}