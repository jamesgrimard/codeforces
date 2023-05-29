// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n ;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	bool ans = 0;
	for (int i=0;i<pow(2,n);i++) {
		int p = 1, sum = 0,cnt=0;
		while (p < pow(2,n)) {
			((i & p) == p) ? sum -= a[cnt] : sum += a[cnt];		
			cnt++;
			p<<=1;
		}
		if (sum % 360 == 0) {
			ans = 1;
			break;
		}
	}
	ans == 1 ? cout << "YES\n" : cout << "NO\n";

	return 0;	
}