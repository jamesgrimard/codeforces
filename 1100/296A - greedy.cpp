// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 

 	int n; cin >> n;
 	vector<int> a(1001);
 	bool ans = 1;
 	for (int i=0;i<n;i++) {
 		int x; cin >> x;
 		a[x]++;
 		if (a[x] > ceil((float)n/2.0)) ans = 0;
 	}

 	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;
}
