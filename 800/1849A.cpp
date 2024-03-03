//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();
	
	int tt; cin >> tt;
	while (tt-- ) {
		int b,c,h; cin >> b >> c >> h;
		cout << 2 + (min((c+h-1),b-2)*2 + 1) << '\n';
	}

  return 0;
}

