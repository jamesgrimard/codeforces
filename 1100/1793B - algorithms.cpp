// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	
	int n ; cin >> n;
	for (int i=0;i<n;i++) {
		int x , y; cin >> x >> y;
		cout << abs(y-x)*2 << '\n';
		for (int j=y;j<=x;j++) cout << j << " ";
		for (int j=x-1;j>y;j--) cout << j << " ";
		cout << '\n';
	}	

	return 0;
}

