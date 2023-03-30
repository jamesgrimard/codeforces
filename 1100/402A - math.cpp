// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int k , a , b , v; cin >> k >> a >> b >> v;
	int cnt = 0;
	while (a > 0) {
		a -= (min(k-1,b) + 1) * v;
		b -= min(k-1,b);
		b = max(b,0);
		cnt++;
	}

	cout << cnt;

	return 0;
}