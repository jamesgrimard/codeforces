// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	// 9 9 8 9 9 
 	// 0 1 3 9 10 11 18 19
	// 0 1 2 6  1  1  7  1 

	int n , k; cin >> n >> k;

	vector<int> a(n+1);

	for (int i=1;i<=n;i++) {
		cin >> a[i];
		a[i] += a[i-1];
	}

	int mn = 0 , index = 0;

	for (int i=0;i<=n-k;i++) {
		if (i == 0 || a[i+k] - a[i] < mn) {
			mn = a[i+k] - a[i];
			index = i+1;
		}
	}

	cout << index;


	return 0;
}