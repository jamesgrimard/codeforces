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
		int n , k; cin >> n >> k;
		int a[n] , b[n] = {}; for (int i=0;i<n;i++) cin >> a[i];
		for (int i=1;i<n;i++) b[i] = abs(a[i]-a[i-1]);
		sort(b,b+n);
		int sum = 0;
		for (int i=n-1-(k-1);i>0;i--) sum += b[i];
		cout << sum << '\n';
	}
  return 0;
}

