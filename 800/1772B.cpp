// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

const char pi[] = "3141592653589793238462643383279";

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		int a[4]; for (int i=0;i<4;i++) cin >> a[i];
		int _min = 100 , _max = 0 , _mini , _maxi;
		for (int i=0;i<4;i++) {
			if (a[i] < _min) {
				_min = a[i];
				_mini = i;
			}
			if (a[i] > _max) {
				_max = a[i];
				_maxi = i;
			}
 		}
 		int r[4] = {};
 		r[_maxi] = 1 , r[_mini] = 1;
 		((r[0] && r[3]) || (r[1] && r[2]))  ? cout << "YES\n" : cout << "NO\n";	
 	}

 	return 0;
}