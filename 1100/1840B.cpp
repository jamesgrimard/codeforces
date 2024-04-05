//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;


void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int S , k; cin >> S >> k;
		cout << min(S,(int)pow((int)2,(int)min(32,k))-1) + 1<< '\n';
	}



	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
