// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int n,k; cin >> n >> k;
		vector<int> L,R;
		for (int i=0;i<n;i++) {
			long long x; cin >> x;
			(x < 0) ? L.push_back(x*-1) : R.push_back(x);
		}
		sort(begin(L),end(L)) , sort(begin(R),end(R));
		long long l = 0 , r = 0 , p = 0;
		for (int i=0;i<R.size();i++) {
			r += (R[i] - p);
			p = R[i];
			if ((R.size()-1-i) % k == 0 || i == R.size() - 1) {
				r += R[i];
				p = 0;
			}
		}	

		p=0;
		for (int i=0;i<L.size();i++) {
			r += (L[i] - p);
			p = L[i];
			if ((L.size()-1-i) % k == 0 && i != L.size()-1) {
				r += L[i];
				p = 0;
			}
		}	
		p = 0;
		for (int i=0;i<L.size();i++) {
			l += (L[i] - p);
			p = L[i];
			if ((L.size()-1-i) % k == 0 || i == L.size()-1) {
				l += L[i];
				p = 0;
			}
		}
		p=0;
		for (int i=0;i<R.size();i++) {
			l += (R[i] - p);
			p = R[i];
			if ((R.size()-1-i) % k == 0 && i != R.size() - 1) {
				l += R[i];
				p = 0;
			}
		}	
		
		cout << min(l,r) << '\n';

	}


	return 0;	
}