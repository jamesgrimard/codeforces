// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n),r(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int tally = 0 ,cnt = 0;
	for (int i=n-1;i>=0;i--) {
		if (tally == 0) cnt++;
		tally = max(0,tally-1);
		tally += (max(0,a[i]-tally));
	}
	cout << cnt;

	return 0;	
}

		