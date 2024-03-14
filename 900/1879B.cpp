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
		long long a[n],b[n];
		long long mn1 = 0 , mn2 = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i == 0 || a[i] < mn1) mn1 = a[i];
		}	
		for (int i=0;i<n;i++) {
			cin >> b[i];
			if (i == 0 || b[i] < mn2) mn2 = b[i];
		}
		long long sum1 = 0 , sum2 = 0;
		for (int i=0;i<n;i++) {
			sum1 += (mn2 + a[i]), sum2 += (mn1 + b[i]);
		}
		cout << min(sum1,sum2) << '\n';

	}
                  
  return 0;
}