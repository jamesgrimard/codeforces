// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n; cin >>n ;
	vector<pair<int,int>> a(n);
	for (int i=0;i<n;i++) cin >> a[i].first >> a[i].second;
	sort(begin(a),end(a));
	
	int stack = a[0].second , mx = a[0].second;
	for (int i=1;i<n;i++) {
		
		stack = max(stack-(a[i].first-a[i-1].first),0);

		stack += a[i].second;
		
		mx = max(mx,stack);
		
		if (i == n-1) cout << a[i].first + stack << " " << mx;
		
	}


	return 0;
}
