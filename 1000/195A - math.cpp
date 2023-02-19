// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b , c; cin >> a >> b >> c;
	int k = a*c / b;
	if (a*c % b != 0) k++;
	cout << k - c;

	return 0;
}



