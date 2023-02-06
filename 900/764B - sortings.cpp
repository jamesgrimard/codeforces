// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n;cin >>n;

	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];

	for (int j=0;j<n/2;j++) {
		if (j % 2 == 0) swap(a[j],a[n-1-j]);
	}
	
	for (int i=0;i<n;i++) cout << a[i] << " " ;

	return 0;
}

