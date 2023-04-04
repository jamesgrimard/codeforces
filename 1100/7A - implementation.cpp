// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<string> a(8);
	for (int i=0;i<8;i++) cin >> a[i];
	int cnt = 0;
	for (int i=0;i<8;i++) {
		for (int j=0;j<8;j++) {
			if (a[i][j] == 'B') {
				bool f= 1;
				for (int k=0;k<8;k++) {
					if (a[i][k] == 'W') f = 0;
				}
				if (f == 1) {
					cnt++;
					for (int k=0;k<8;k++) a[i][k] = 'w';
				} else {
					cnt++;
					for (int k=0;k<8;k++) a[k][j] = 'w';
				}
			}
		}
	}

	cout << cnt;

	return 0;
}
