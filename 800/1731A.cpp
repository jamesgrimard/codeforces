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
  	int n; cin >> n;
  	long long prev = 1, sum = 0; 
  	long long a[n];
  	for (int i=0;i<n;i++) cin >> a[i];
  	sort(a,a+n);	  	
  	for (int i=0;i<n-1;i++) a[n-1] *= a[i];
		sum = a[n-1] + n-1;
  
		cout << sum * 2022LL << '\n';
  }			


	                         


 	return 0;
}