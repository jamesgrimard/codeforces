// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];	
	map<int,int> m;
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) m[a[i]+a[j]]++;
	}
	int mx = 0;
	for (auto [k,v]:m) mx = max(mx,v);
	cout << mx << '\n';	

	return 0;	
}