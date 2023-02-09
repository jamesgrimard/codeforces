// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n, k; cin >>n >> k;
	int mx = 1 , count = 1 , p = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (i == 0) {p=x;continue;}
		if (x == p) {
			mx = max(mx,count); count = 0;
		}
		count++;
		p = x;
	}
	cout << max(mx,count);
	return 0;
}