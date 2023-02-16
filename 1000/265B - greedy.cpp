// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int sum = 0;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=1;i<n;i++) sum += abs(a[i]-a[i-1]);
	cout << a[0] + (2*n-1) + sum;

	return 0;
}



