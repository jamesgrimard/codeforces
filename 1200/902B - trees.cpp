// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 	
 	int n; cin >> n;
 	vector<pair<int,int>> a(n+2);
 	vector<int> c(n+1);
 	for (int i=2;i<=n;i++) cin >> a[i].first;
 	for (int i=1;i<=n;i++) cin >> c[i];
	a[1].second = c[1];
 	int cnt = 1;
 	for (int i=2;i<=n;i++) {
 		if (c[i] != c[a[i].first]) cnt++;
 	}

 	cout << cnt;
	return 0;	
}

		