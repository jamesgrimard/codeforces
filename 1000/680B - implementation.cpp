// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , k; cin >> n>> k;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	int count = 0;
	if (a[k-1] == 1) count++;
	for (int i=1;i<=min(k-1,n-k);i++) {
		if (a[k-1-i] == 1 && a[k-1+i] == 1) count += 2;
	}
	for (int i=0;i<k-1-min(k-1,n-k);i++) if (a[i] == 1) count++;
	for (int i=k+min(k-1,n-k);i<n;i++) if (a[i] == 1) count++;

	cout << count;
	
	return 0;
}



