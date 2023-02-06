// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >> n;
	int count = 0 , mx = 0; 
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		mx = max(x,mx);
		if (i+1 == mx) count++;
	}
	cout << count;

	return 0;
}