// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long k,P=6,Q=16; cin >> k;
	for (int i=1;i<k;i++) P = (P*Q) % 1000000007 , Q = (Q*Q) % 1000000007;
	cout << P;
	

	



	return 0;	
}