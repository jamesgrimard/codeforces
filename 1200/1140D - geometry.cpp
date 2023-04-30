// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	int sum = 0;
	for (int i=3;i<=n;i++) {
		sum += i * (i-1);
	}
	cout << sum << '\n';

	return 0;
}