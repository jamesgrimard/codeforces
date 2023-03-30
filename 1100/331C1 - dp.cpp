// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int myFunction(int n, int k) {
	int N = n , mx = 0;
	while (N > 0) {
		mx = max(mx,N%10);
		N /= 10;
	}
	k++;
	if (n - mx == 0) return k;
	return myFunction(n-mx,k);
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 

	int n; cin >> n;

	cout << min(myFunction(n,0),n);



	return 0;
}