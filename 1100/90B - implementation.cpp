// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int h,w; cin >> h >> w;

	vector<string> a(h);
	for (int i=0;i<h;i++) cin >> a[i];

	for (int i=0;i<h;i++) {
		for (int j=0;j<w;j++) {
			bool f = 0;
			for (int l=j-1;l>=0;l--) if (a[i][l] == a[i][j]) f = 1;
			for (int l=j+1;l<w;l++) if (a[i][l] == a[i][j]) f = 1;
			for (int l=i-1;l>=0;l--) if (a[l][j] == a[i][j]) f = 1;
			for (int l=i+1;l<h;l++) if (a[l][j] == a[i][j]) f = 1;
			if (f == 0) cout << a[i][j];
		}
	}



	return 0;
}
