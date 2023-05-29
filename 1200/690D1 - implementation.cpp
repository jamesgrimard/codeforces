// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int h , w; cin >> h >> w;
	vector<string> a(h);
	for (int i=0;i<h;i++) cin >> a[i];
	int cnt = 0;
	bool tally = 0;
	for (int i=0;i<w;i++) {
		if (a[h-1][i] == '.' || (i == w-1 && a[h-1][i] == 'B')) {
			if (tally == 0 && i == w-1 && a[h-1][i] == 'B') tally = 1;
			if (tally == 1) cnt++;
			tally = 0;
		}
		if (a[h-1][i] == 'B') tally = 1;
	}
	cout << cnt << '\n';

	return 0;	
}

		