// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	vector<int> a = {4,7,47,74,444,447,474,477,744,747,774,777};
	int n ; cin >> n; bool ans = 0 ;
	for (int i=0;i<size(a);i++) {
		if (n % a[i] == 0) ans = 1; 
	}

	(ans == 1) ? cout << "YES" : cout << "NO";
	cout << '\n';


	return 0;
}

