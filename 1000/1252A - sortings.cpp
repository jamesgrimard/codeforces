// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n ; cin >>n;
	for (int i=0;i<n;i++) {
		int x ; cin >> x;
		cout << (n-x+1) << " ";
	}


	return 0;
}
