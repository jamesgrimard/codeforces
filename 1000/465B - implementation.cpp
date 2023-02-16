// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ;cin >> n;
	int count = 0 , p = 0;
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		if (x == 1) count++;
		if (x == 0 && p == 1) count++;
		p = x;
	}
	if (p == 0) count = max(0,count-1);
	cout << count;

	return 0;
}



