//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int e = 1e9;

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();

  int tt; cin >> tt;
  while (tt--) {
  	int n , k; cin >> n >> k;
  	string s; cin >> s;
  	bool flag = 0;
  	for (int i=0;i<n;i++) if (s[i] - '0' < k) {
	  	cout << s.substr(0,i) << k << s.substr(i,n-i) << '\n';
	  	flag = 1;
	  	break;
	  }
		if (flag == 0) cout << s << k << '\n';
	}

  return 0;
}

