// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n, k; cin >> n >> k;

	long long i = 1;

	while ((i*i+i)/2+i < (n+k)) i++;
	
	cout << ((i*i+i)/2 - k);

	return 0;
}