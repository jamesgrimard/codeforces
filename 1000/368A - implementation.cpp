// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , fine; cin >> n >> fine;

	vector<int> a(n);
	for (int i=0;i<n;i++) cin >> a[i];
	sort(begin(a),end(a));
	for (int i=1;i<n;i++) a[i] += a[i-1];
	int guests; cin >> guests;
	
	int sum = a[min(n-1,guests-1)];
	int fines = guests - n;
	if (fines > 0) sum -= fines*fine;

	cout << sum;



	
	return 0;
}



