// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n+1);
	long long total = 0, sum = 0,cnt = 0;
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		total+=a[i];
		if (i%2==0) sum += a[i];
	}

	for (int i=1;i<=n;i++) {
		if (i%2==0) {
			sum -= a[i];
			sum += a[i-1];
		}
		if (sum == total-sum-a[i]) cnt++;
	}

	cout << cnt << '\n';


	return 0;	
}