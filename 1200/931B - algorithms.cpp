// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , a , b; cin >> n >> a >> b;
	int cnt = 0;
	while (a != b) {
		cnt++;
		a = ceil((float)a/2.0);
		b = ceil((float)b/2.0);
	}

	if (cnt == log(n)/log(2)) {
		cout << "Final!";
	} else {
		cout << cnt;
	}

	return 0;	
}

		