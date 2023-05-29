// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n , a , b; cin >> n >> a >> b;

	if (a > b) swap(a,b);

	int k = n/2 , mx = 0;
	if (n % 2) k++;

	for (int i=0;i<n/2;i++) {
		mx = max(mx,min(a/(n/2-i),b/(k+i)));
	}

	cout << mx;

	return 0;	
}

		