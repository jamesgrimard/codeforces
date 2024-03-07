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
  	int n; cin >> n;
  	if (n%2 == 0) {
  		cout << -1 << '\n';
  		continue;
  	}
  	vector<int> a;
  	while (n > 1) {
  		int k = n;
  		n /= 2;
  		if (n % 2 == 0) {
  			a.push_back(1);
  			n++;
  		} else {
  		  a.push_back(2);
  		}
  	}
  	cout << a.size() << '\n';
  	for (int i=a.size()-1;i>=0;i--) cout << a[i] << " ";
  	cout << '\n';
  }



  return 0;
}

