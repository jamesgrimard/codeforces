// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	long long sum = 0;
	for (int i=0;i<n;i++) {
		sum += (((long long)a[i]*(long long)a[n-1-i])%10007);
	}
	cout << sum % 10007;

	return 0;	
}

		