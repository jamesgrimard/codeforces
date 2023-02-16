// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n >> k;
	vector<int> a(n);
	for (int i=0;i<n-1;i++) cin >> a[i];
	int sum = 0;
	
	while (sum <= k-1) {
		if (sum == k-1) {
			cout << "YES";
			return 0;
		}
		sum += a[sum];
	}


	cout << "NO";
	

	return 0;
}



