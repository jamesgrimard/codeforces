// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),b(n);
	for (int i=0;i<n;i++) cin >> b[i];
	a[0] = b[0];
	for (int i=1;i<n;i++) a[i] = b[i]-b[i-1];
	vector<int> o = {n};
	for (int i=n-1;i>=1;i--) {
		if (a[i] == a[0]) {
			int tally = 0;
			for (int j=0;i+j<n;j++) {
				if (a[i+j] != a[0+j]) {
					tally = 0;
					break;
				}
				tally = n-(j+1);
			}
			if (tally!=0) o.push_back(tally);
		}
	}
	reverse(o.begin(),o.end());
	cout << o.size() << '\n';
	for (auto v:o) cout << v << " ";


	return 0;	
}