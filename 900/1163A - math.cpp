// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , m ; cin >> n >> m;

	(m == 0) ? cout << 1 : cout << min(m,n-m);
	

	
	return 0;
}

