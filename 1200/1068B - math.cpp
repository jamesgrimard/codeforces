// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n; cin >> n;
	long long cnt = 0;
	for (long long i=1;i*i<=n;i++) {
		if (n%i==0) {
			cnt++;
			if (i*i != n)cnt++;
		}
	}
	cout << cnt << '\n';


	return 0;	
}