// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	vector<int> a(4);
	int mn = 0;
	for (int i=0;i<4;i++) {
		cin >> a[i];
		if (a[i] < mn || i == 0) mn = a[i];
	}

	int x ,y ; cin >> x >> y;

	cout << max(0,min(mn-x,y-x+1));


	return 0;
}
