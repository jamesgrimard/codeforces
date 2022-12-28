// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n ;

	int min = 1000000000 , c = 0 , m = 1;
	
	for (int i=0;i<n;i++){
		int x; cin >> x;
		if (x < min) {
			min = x; c = 0; m = i+1;
		}
		if (x == min) c++;
	}

	(c > 1) ? cout << "Still Rozdil" : cout << m;
	cout << '\n';

	return 0;
}

