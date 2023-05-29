// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		vector<int> a(n),o;
		for (int i=0;i<n;i++) cin >> a[i];
		if (a[0]%2 != a[n-1]%2) {
			a[n-1] = a[0];
			o.push_back(0),o.push_back(n-1);
		}
		for (int i=n-2;i>=0;i--) {
			if (a[i]%2 == a[n-1]%2) {
				a[i] = a[n-1];
				o.push_back(i) , o.push_back(n-1);
			}
		}
		int q = 0;
		for (int i=1;i<n;i++) {
			if (a[i]%2 != a[q]%2) {
				a[i] = a[q];
				o.push_back(q) , o.push_back(i);
			}
			q = i;
		}
		
		
		cout << o.size()/2 << '\n';
		for (int i=0;i<o.size();i+=2) {
			cout << o[i]+1 << " " << o[i+1]+1 << '\n';
		}
	}
 	

	return 0;	
}