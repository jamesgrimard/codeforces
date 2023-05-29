// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	map<string,int> m;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		string s; cin >> s;
		sort(begin(s),end(s));
		if (m[s] == 0) {
			m[s] = x;
		} else {
			m[s] = min(x,m[s]);
		}
	}
	vector<int> o;
	vector<string> s = {"A","B","C"} , d = {"AB","AC","BC"};
	for (int i=0;i<3;i++) {
		if (m[d[i]] == 0) continue;
		for (int j=i+1;j<3;j++) {
			if (m[d[j]] == 0) continue;
			o.push_back(m[d[i]]+m[d[j]]);
		}
		if (m[s[2-i]] != 0) o.push_back(m[s[2-i]]+m[d[i]]);
	}
	if (m["A"] != 0 && m["B"] != 0 && m["C"] != 0) o.push_back(m["A"]+m["B"]+m["C"]);
	if (m["ABC"] != 0) o.push_back(m["ABC"]);
	if (o.size() == 0) {
		cout << -1;
	} else {
		sort(begin(o),end(o));
		cout << o[0];
	}

	return 0;	
}