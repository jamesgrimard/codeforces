// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a ,b ; cin >> a >> b;

	if (a == 0) {
		for (int i=b+1;i>=1;i--) cout << i << " ";
		return 0;
	}

	cout << 1 << " ";
	for (int i=2+b;i<=a+b+1;i++) cout << i << " ";
	for (int i=1+b;i>=2;i--) cout << i << " ";
	

	return 0;
}



