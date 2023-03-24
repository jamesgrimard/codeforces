// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h,w,n,k;cin>>h>>w>>n>>k;

	vector<vector<bool>> a(h,vector<bool>(w));

	for (int i=0;i<n;i++) {
		int y,x; cin >> y >> x;
		a[y-1][x-1] = 1;		
	}

	int tally = 0;

	// sizes of shapes
	for (int H=0;H<h;H++) {
		for (int W=0;W<w;W++) {

			// merry go round perimeter
			for (int i=0;i<h;i++) {
				for (int j=0;j<w;j++) {
					
					if (i-H < 0 || j-W < 0) continue;

					// count viola's
					int cnt = 0;
					for (int I=i;I>=i-H;I--) {
						for (int J=j;J>=j-W;J--) {
							if (a[I][J] == 1) cnt++;
						}	
					}

					if (cnt >= k) tally++;
				}
			}
		}
	}

	cout << tally;

	return 0;
}

