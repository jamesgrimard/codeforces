// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int h,w; cin >> h >> w;
	char president; cin >> president;
	vector<string> a(h);
	for (int i=0;i<h;i++) cin >> a[i];

	map<char,bool> m;
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) {
			if (a[i][j] == president) {
				m[a[i][min(j+1,w-1)]] = 1;
				m[a[i][max(j-1,0)]] = 1;
				m[a[min(i+1,h-1)][j]] = 1;
				m[a[max(i-1,0)][j]] = 1;
			}
		}
	}
	int cnt = 0;
	for (auto [k,v] : m) {
		if (k != '.' && k != president) cnt++;
	}
	cout << cnt;

	return 0;
}
