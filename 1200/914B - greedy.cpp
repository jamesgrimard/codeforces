// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int n ; cin >> n;
	vector<int> a(100001);
	for (int i=0;i<n;i++) {
		int x; cin >> x;
		a[x]++;
	}
	bool f= 0;
	for (int i=100000;i>=1;i--) {
		if (a[i] % 2) f=1;
	}
	f == 1 ? cout << "Conan\n" : cout << "Agasa";

	return 0;	
}

		