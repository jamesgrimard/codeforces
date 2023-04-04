// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int h,w; cin >> h >> w;

	vector<string> a(h);

	for (int i=0;i<h;i++) cin >> a[i];

	int cnt = 0;

	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) {
			bool f = 0;
			if (a[i][j] == 'W') {
				if (a[max(i-1,0)][j] == 'P') f = 1;
				if (a[min(i+1,h-1)][j] == 'P') f = 1;
				if (a[i][max(j-1,0)] == 'P') f = 1;
				if (a[i][min(j+1,w-1)] == 'P') f = 1;
			}
			if (f == 1) cnt++;
		}
	}

	cout << cnt;


	return 0;
}
