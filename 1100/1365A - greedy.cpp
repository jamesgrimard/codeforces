// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt ; cin >> tt;
	while (tt--) {
		int h , w ; cin >> h >> w;
		vector<bool> a(h*w);
		for (int i=0;i<h;i++) {
			for (int j=0;j<w;j++) {
				int temp; cin >> temp;
				if (temp == 1) {
					for (int l=0;l<w;l++) a[i*w+l] = 1;
					for (int l=0;l<h*w;l+=w) a[j+l] = 1;
				}
			}
		}
		int cnt = 0; bool f = 0;
		while (f == 0) {
			cnt++;
			for (int i=0;i<h*w;i++) {
				if (a[i] == 0) {
					for (int j=i/w*w;j<=i/w*w+w;j++) a[j] = 1;
					for (int j=i-i/w*w;j<h*w;j+=w) a[j] = 1;
					break;
				}
				if (i == h*w-1) f = 1;
			}
		}

		

		(cnt % 2 == 1) ? cout << "Vivek\n" : cout << "Ashish\n";

	}

	return 0;
}

