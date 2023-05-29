// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int h,w;cin >> h >> w;
	vector<string> a(h),r;
	for (int i=0;i<h;i++) cin >> a[i];
	string s; cin >> s;
	string S = "0123";
	int sy, sx, ey,ex;
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) {
			if (a[i][j] == 'S') {
				sy = i, sx = j;
			} 
			if (a[i][j] == 'E') {
				ey = i, ex = j;
			}
		}
	}
	do {
		r.push_back(S);
	}
	while (next_permutation(S.begin(),S.end()));
	map<char,int> m;
	int cnt = 0;
	for (int i=0;i<r.size();i++) {
		int SY=sy,SX=sx;
		for (int j=0;j<4;j++) m[r[i][j]] = j;
		for (int j=0;j<s.size();j++) {
			if (m[s[j]] == 0) {
				SY++;
			} else if (m[s[j]] == 1) {
				SY--;
			} else if (m[s[j]] == 2) {
				SX++;
			} else {
				SX--;
			}
			if (SY < 0 || SY >= h || SX < 0 || SX >= w || a[SY][SX] == '#') break;
			if (a[SY][SX] == 'E') {
				cnt++;
				break;
			}
		}

	}
	cout << cnt;

	return 0;	
}

		