// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int mxln = 0 , mnrn = 0 , mxlm = 0, mnrm = 0;
	for (int i=0;i<n;i++) {
		int l , r; cin >> l >> r;
		if (mnrn == 0 || r < mnrn) mnrn = r;
		mxln = max(l,mxln);
	}
	int m ; cin >> m;
	for (int i=0;i<m;i++) {
		int l,r; cin >> l >> r;
		if (mnrm == 0 || r < mnrm) mnrm = r;
		mxlm = max(l,mxlm);
	}

	cout << max(0,max(mxln-mnrm,mxlm-mnrn));	

	return 0;
}

