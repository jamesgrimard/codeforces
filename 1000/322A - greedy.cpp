// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a , b; cin >> a >> b;
	cout << a + b - 1 << '\n';
	for (int i=1;i<=b;i++) cout << 1 << " " << i << '\n';
	for (int i=2;i<=a;i++) cout << i << " " << 1 << '\n';


	return 0;
}



