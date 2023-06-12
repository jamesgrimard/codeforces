// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int w,h; cin >> w >> h;
		int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
		int W,H; cin >> W >> H;
		vector<pair<int,int>> a(4);
		a[0].first = W , a[0].second = H;
		a[1].first = W , a[1].second = h-H;
		a[2].first = w-W , a[2].second = h-H;
		a[3].first = w-W , a[3].second = H;
		int mn = -1;
		for (int i=0;i<4;i++) {
			if (i <= 1) {
				int k = max(0,a[i].first-x1);
				if (x2+k <= w) {
					if (mn == -1 || k < mn) mn = k;
				}
				//cout << k << " ";
			} else {
				int k = max(0,x2-a[i].first);
				if (x1-k >= 0) {
					if (mn == -1 || k < mn) mn = k;
				}
				//cout << k << " ";
			}
			if (i == 0 || i == 3) {
				int j = max(0,a[i].second-y1);
				if (y2+j <= h) {
					if (mn == -1 || j < mn) mn = j;
				}
				//cout << j << '\n';
			} else {
				int j = max(0,y2-a[i].second);
				if (y1-j >= 0) {
					if (mn == -1 || j < mn) mn = j;
				}
				//cout << j << '\n';
			}
		}
		cout << mn << '\n';
	}

	return 0;	
}