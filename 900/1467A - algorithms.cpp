// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;
		
		cout << 9;

		if (n >= 2) cout << 8;

		if (n >= 3) cout << 9;
		
		for (int i=0;i<n-3;i++){
			cout << (i % 10);
		}
		
		cout << '\n';	
	}
	return 0;
}