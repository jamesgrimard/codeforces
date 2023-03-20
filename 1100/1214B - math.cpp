// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();


	int a , b , n ; cin >> a >> b >> n;
	cout << min(min(n+1,a+b-n+1),min(a,b)+1);

	return 0;
}

