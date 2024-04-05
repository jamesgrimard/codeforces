//github.com/jamesgrimard/codeforces

#include <bits/stdc++.h>

using namespace std;

int mod(int a , int b) {
	return ((a % b) + b) % b;
}

const int MOD = 1e9 + 7;


void solve() {

	int tt; cin >> tt;
	while (tt--) {
		int n , k; cin >> n >> k;
		int a[n];
		long long sum = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			sum += a[i];
		}
		
		sort(a,a+n);	// O(nlogn);
		                                           
		long long A[k+1] = {}, B[k+1] = {} , mn = sum;
		for (int i=1;i<=k;i++) {

			A[i] = A[i-1];
			B[k-i] = B[k-i+1];

			A[i] += a[i*2-1] + a[i*2-2];
			B[k-i] += a[n-i];
		}
                                               
		for (int i=0;i<=k;i++) mn = min(mn,A[i] + B[i]);
		
		cout << sum - mn << '\n';

	}

	
}		

int main() {
  ios::sync_with_stdio(false);cin.tie(0);cout.tie();


	solve();
                                                     

  return 0;
}
