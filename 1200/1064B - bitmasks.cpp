// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int tt; cin >> tt;
	while (tt--) {
		long long n; cin >> n;
		long long p = 1,cnt = 0 ;
		while (p <= n) {
			if ((p&n)==p) {
				cnt++;
			} 			
			p <<= 1;
		}
		

		cout << setprecision(12) << pow(2,cnt) << '\n';
	}


	return 0;	
}