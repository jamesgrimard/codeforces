//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		string a[3]; for (int i=0;i<3;i++) cin >> a[i];
		string ans = "DRAW";
		for (int i=0;i<3;i++) {
			if (a[i][1] == a[i][0] && a[i][1] == a[i][2]) ans = a[i][2];
			if (a[1][i] == a[0][i] && a[1][i] == a[2][i]) ans = a[2][i];
			if (a[1][1] == a[0][i] && a[1][1] == a[2][2-(i%3)]) ans = a[1][1];
			if (ans != "DRAW" && ans != ".") break;
		}
		(ans == ".") ? cout << "DRAW\n" : cout << ans << '\n';
	}	
								            	
			

  return 0;
}

