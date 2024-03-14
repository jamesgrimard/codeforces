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
		int a , b ,n; cin >> a >> b >> n;
		int A[n]; for (int i=0;i<n;i++) cin >> A[i];
		sort(A,A+n);
		long long sum = b - 1;
		for (int i=0;i<n;i++) sum += min(a-1,A[i]);
		cout << sum + 1 << '\n';
	}



       
  return 0;
}