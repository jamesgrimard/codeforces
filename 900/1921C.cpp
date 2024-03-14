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
  	long long n , life , cost , off; cin >> n  >> life >> cost >> off;
  	long long prev = 0; 
  	for (int i=0;i<n;i++) {
  		long long x; cin >> x;
  		((x - prev) * cost < off) ? life -= ((x-prev)*cost) : life -= off;
  		prev = x;
  	}
  	(life > 0) ? cout << "YES\n" : cout << "NO\n";
  }





 	return 0;
}