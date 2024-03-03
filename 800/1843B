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
  	int n; cin >> n;
  	int cnt = 0;
  	long long sum = 0;
  	bool start = 0;
  	long long a[n]; for (int i=0;i<n;i++) {
  		cin >> a[i];
  		if (a[i] < 0) start = 1;
  		if (start == 1 && a[i] > 0) {
  			cnt++ , start = 0;
  		}
  		sum += abs(a[i]);
  	}
  	if (start) cnt++;
  	cout << sum << " " << cnt << '\n';
  }

  return 0;
}

