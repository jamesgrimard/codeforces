// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n,m,nn(0),pp(0);
	cin >> n >> m;
	for (int i=0;i<n;i++) {
		int x;
		cin >> x;
		(x == 1 ? pp : nn)++;
	}
	while (m--) {
		int l,r,df;
		cin >> l >> r;
		df = r - l + 1;
		cout << ((df & 1 == 1) || ((df / 2 > pp) || (df / 2 > nn)) ? 0 : 1) << endl;
	}
	return 0;
}