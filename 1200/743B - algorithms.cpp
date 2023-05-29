// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n , k; cin >> n >> k;

	long long cnt = 1;
	while (k%2 == 0) {
		k/=2;
		cnt++;
	}

	cout <<cnt;

	return 0;	
}

		