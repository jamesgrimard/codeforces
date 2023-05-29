// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >>n;
	string a,b; cin >> a >> b;
	long long cnt00 = 0 , cnt10 = 0, cnt01 = 0 , cnt1 = 0;
	for (int i=0;i<n;i++) {
		if (a[i] == '1') cnt1++;
		if (a[i] == '1' && b[i] == '0') cnt10++;
		if (a[i] == '0' && b[i] == '1') cnt01++;
		if (a[i] == '0' && b[i] == '0') cnt00++;
	}

	cout << cnt00 * cnt1 + cnt10 * cnt01;

	return 0;	
}