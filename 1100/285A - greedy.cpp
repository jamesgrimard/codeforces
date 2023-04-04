// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , k; cin >>n >> k;

	for (int i=n;i>n-k;i--) cout << i << " ";
	for (int i=1;i<=n-k;i++) cout << i << " ";

	return 0;
}
