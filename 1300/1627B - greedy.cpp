// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int tt; cin >> tt;
	while (tt--) {
		int h,w; cin >> h >> w;
		vector<int> c(h+w);
		int q = h+w-2;
		for (int i=0;i<h/2;i++) {
			for (int j=0;j<w/2;j++) c[q-i-j] += 4;
		}
		if (h%2 == 1 && w%2 == 1) {
			c[h/2+w/2]++;
			
			for (int i=0;i<w/2;i++) c[q-h/2-i] += 2;
		
			for (int i=0;i<h/2;i++) c[q-w/2-i] += 2;
			
		} else if (h%2 == 1) {
			for (int i=0;i<w/2;i++) c[q-h/2-i] += 2;
		} else if (w%2 == 1) {
			for (int i=0;i<h/2;i++) c[q-w/2-i] += 2;
		}
		for (int i=0;i<h+w;i++) if (c[i] != 0) for (int j=0;j<c[i];j++) cout << i << " ";
		cout << '\n';
	}

	return 0;	
}