// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h , w; cin >> h >> w;
	vector<vector<int>> a(h,vector<int>(w)) , c(h,vector<int>(w));
	for (int i=0;i<h;i++) for (int j=0;j<w;j++) cin >> a[i][j];
	for (int i=0;i<h;i++) {
		bool f = 0;
		for (int j=0;j<w;j++) {
			if (a[i][j] == 1) f = 1;
			if (a[i][j] == 0 && f == 1) c[i][j]++; 
		}
		f = 0;
		for (int j=w-1;j>=0;j--) {
			if (a[i][j] == 1) f = 1;
			if (a[i][j] == 0 && f == 1) c[i][j]++; 
		}
	}
	for (int j=0;j<w;j++) {
		bool f = 0;
		for (int i=0;i<h;i++) {
			if (a[i][j] == 1) f = 1;
			if (a[i][j] == 0 && f == 1) c[i][j]++; 
		}
		f = 0;
		for (int i=h-1;i>=0;i--) {
			if (a[i][j] == 1) f = 1;
			if (a[i][j] == 0 && f == 1) c[i][j]++; 
		}
	}
	int cnt = 0;
	for (int i=0;i<h;i++) for (int j=0;j<w;j++) cnt += c[i][j];
	cout << cnt;
	return 0;	
}

		