//github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
using namespace std;

int mod(int a, int b) { 
  return (a % b + b) % b; 
}

int main() {
  std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie();
	
	// make array a[n] not sorted
	// search a[n] for smallest d (difference) a[i] - a[i-1]

	int tt; cin >> tt;
	while (tt--) {
		int n; cin >> n;
		int a[n]; for (int i=0;i<n;i++) cin >> a[i];
		int _min = 1e9;
		for (int i=1;i<n;i++) _min = min(a[i]-a[i-1],_min);
		(_min < 0) ? cout << "0\n" : cout << _min / 2 + 1 << '\n';
	}  

  return 0;
}

