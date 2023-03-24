// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n , a , b; cin >> n >> a >> b;
	if (a > b) swap(a,b);
	vector<int> A(n);
	for (int i=0;i<n;i++) cin >> A[i];
	sort(rbegin(A),rend(A));
	long long s1 = 0 , s2 = 0;
	for (int i=0;i<a;i++) s1 += A[i];
	for (int i=a;i<a+b;i++) s2 += A[i];

	cout << setprecision(10)<< (double) s1 / (double) a + (double) s2 / (double) b;

	return 0;
}

