// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;

	map<int,int> my,mx;
	int mxy = 0 , mxx = 0 , mnx = 0 , mny = 0;
	for (int i=0;i<n;i++) {
		int a, b; cin >> a >> b;
		my[a]++;
		mx[b]++;
		if (i == 0) {
			mny = a; mnx = b;
			mxy = a; mxx = b;
		}
		mxy = max(mxy,a); mxx = max(mxx,b);
		mny = min(mny,a); mnx = min(mnx,b);
	}

	if (mxy != mny && mxx != mnx) {
		cout << (mxx-mnx)*(mxy-mny);
	} else {
		cout << -1;
	}





	return 0;
}

