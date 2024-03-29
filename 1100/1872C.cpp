//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

int _highestfactor(int a) {
	for (int i=3;i*i<=a;i+=2) if (a % i == 0) return i;
	return a;
}


void solve() {
  int tt; cin >> tt;
  while (tt--) {
  	int l , r; cin >> l >> r;
  	if (r < 4) {
  		cout << -1 << '\n';
		} else if (r % 2 == 0) {
  		cout << r - 2 << " " << 2 << '\n';
  	} else if (r - 3 >= l) {
  		cout << r - 3 << " " << 2 << '\n';
  	} else if (l % 2 == 0 && l >= 4) {
			cout << l-2 << " " << 2 << '\n';
		} else if (l + 1 <= r && l + 1 >= 4) {
			cout << l - 1 << " " << 2 << '\n';	  	                               	
  	} else {
  		int x = _highestfactor(l);
  		if (x == l) {
  			cout << -1 << '\n';
  		} else {
  			cout << l - x << " " << x << '\n';
  		}
  	}
  }
	
                                            


				                        
}


int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();

  solve();

  return 0;
}
