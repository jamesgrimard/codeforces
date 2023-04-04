// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n; cin >> n;
	int mx = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n;i++) {
		int p = 0;
		for (int j=i;j<n;j++) {
			p ^= a[j];
			mx = max(mx,p);
		}
	}
 	
	cout << mx;
	
	
	

	return 0;
}
