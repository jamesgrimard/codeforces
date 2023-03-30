// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
 
	int c1 , c2 , c3 , c4; cin >> c1 >> c2 >> c3 >> c4;

	int n , m ; cin >>n >> m;

	vector<int> a(n) , b(m);

	for (int i=0;i<n;i++) {
		cin >> a[i];
		a[i] = min(a[i]*c1,c2);
		if (i != 0) a[i] += a[i-1];
	}
	for (int i=0;i<m;i++) {
		cin >> b[i];
		b[i] = min(b[i]*c1,c2);
		if (i != 0) b[i] += b[i-1];
	}

	int suma = 0 , sumb = 0;

	if (n > 0) suma = min(a[n-1],c3);
	if (m > 0) sumb = min(b[m-1],c3);

	cout << min(suma+sumb,c4);

	return 0;
}