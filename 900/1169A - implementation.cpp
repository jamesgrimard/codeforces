// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a , x, b , y; cin >> n >> a >> x >> b >> y;

	vector<int> A,B;

	if (x < a) x+=n; if (y > b) b+=n;

	for (int i=a;i<=x;i++) A.push_back(i);

	for (int i=b;i>=y;i--) B.push_back(i);

	for (int i=0;i<min(size(A),size(B));i++) {
		if (A[i]%n == B[i]%n) {
			cout << "YES\n"; return 0;
		}
	}

	cout << "NO\n";
/*
	for (int i=0;i<size(A);i++) cout << (A[i]%n) << " ";
	cout << '\n';
	for (int i=0;i<size(B);i++) cout << (B[i]%n) << " ";
	cout << '\n';

*/
	return 0;
}

