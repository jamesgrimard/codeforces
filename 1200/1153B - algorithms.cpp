// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h,w,l; cin >> h >> w >> l;
	vector<vector<int>> a(h,vector<int>(w));
	vector<int> f(w),s(h);
	for (int i=0;i<w;i++) cin >> f[i];
	for (int i=0;i<h;i++) cin >> s[i];
	for (int i=0;i<h;i++){
		for (int j=0;j<w;j++) cin >> a[i][j];
	}
	for (int i=0;i<w;i++) {
		for (int j=h-1;j>=0;j--) {
			if (a[j][i] == 1) a[j][i] = f[i];
		}
	}
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) {
			if (a[i][j] > s[i]) a[i][j] = s[i];
		}
	}
	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) cout << a[i][j] << " ";
		cout << '\n';
	}

	return 0;
}