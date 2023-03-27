// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int w,h; cin >> w >> h;
	vector<int> a(h);
	for (int i=0;i<h;i++) {
		int mx = 0 , index = 0;
		for (int j=0;j<w;j++) {
			int x; cin >> x;
			if (x > mx) {
				mx = x;
				index = j;
			}
		}
		a[i] = index+1;
	}

	// [1 3 1 3]
	int mx = 0 , index = 0;
	for (int i=0;i<h;i++) {
		int cnt = 0;
		for (int j=i;j<h;j++) {
			if (a[j] == a[i]) cnt++;
		}
		if (cnt > mx || (cnt == mx && a[i] < index)) {
			mx = cnt;
			index = a[i];
		}
	}

	cout << index;

	return 0;
}

