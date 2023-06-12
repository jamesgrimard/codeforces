// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int h,w; cin >> h >> w;
		vector<string> a(h),c(h);
		for (int i=0;i<h;i++) cin >> a[i];
		string S = "";
		for (int i=0;i<w;i++) S+='0';
		for (int i=0;i<h;i++) c[i] = S;
		vector<vector<int>> b;
		if (a[0][0] == '1') {
			cout << -1 << '\n';
			continue;
		}
		for (int i=h-1;i>=0;i--) {
			for (int j=w-1;j>=0;j--) {
				vector<int> tmp(4);
				if (i == 0) {
					if (a[i][j] == '1' && c[i][j] == '0') {
						c[i][j-1] = '0' , c[i][j] = '1';
						tmp[0]=i+1,tmp[1]=j,tmp[2]=i+1,tmp[3]=j+1;
						b.push_back(tmp);
					}
				} else {
					if (a[i][j] == '1' && c[i][j] == '0') {
						c[i][j] = '1' , c[i-1][j] = '0';
						tmp[0]=i,tmp[1]=j+1,tmp[2]=i+1,tmp[3]=j+1;
						b.push_back(tmp);
					}
				}
			}
		}
		cout << b.size() << '\n';
		for (auto v:b) {
			for (auto V:v) cout << V << " ";
			cout << '\n';
		}
	}
 
	
	return 0;	
}