// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long n ; cin >> n;
	long long sum = n;

	for (int i=1;i<n;i++) sum += i*(n-i);

	cout << sum;


	return 0;
}



