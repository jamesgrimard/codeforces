// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m; cin >> n >> m;
	vector<vector<int>> pens(1001,vector<int>(1001));
	map<int,int> d;
	for (int i=0;i<n;i++) {
		int x , y; cin >> x >> y;
		pens[y][x]++;
		d[y]++;
	}

	vector<pair<int,int>> b;
	int u = 0, v = 0;
	for (int i=0;i<m;i++) {
		pair<int,int> temp; cin >> temp.second >> temp.first;
		if (pens[temp.first][temp.second] > 0) {
			v++;
			pens[temp.first][temp.second]--;
			d[temp.first]--;
		} else {
			b.push_back(temp);
		}
	}

	for (int i=0;i<b.size();i++) {
		if (d[b[i].first] > 0) {
			u++;
			d[b[i].first]--;
		}
	}

	cout << u + v << " " << v;

	return 0;
}
