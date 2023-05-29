// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n ; cin >>n ;
	if (n > 36) {
		cout << -1;
	} else if (n == 0) {
		cout << 1;
	} else {
		for (int i=0;i<n/2;i++) cout << "8";
		if (n%2) cout<<"6"; 
		
	}

	return 0;	
}

		