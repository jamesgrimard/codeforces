// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	long long a ,b; cin >> a >> b;

	vector<long long> A(5,a/5) , B(5,b/5);

	for (int i=1;i<=a%5;i++) A[i]++; 
	for (int i=1;i<=b%5;i++) B[i]++; 

	long long sum = A[0]*B[0];

	for (int i=1;i<=2;i++) {
		sum += (A[i]*B[5-i]);
		sum += (B[i]*A[5-i]);
	}

	cout << sum;

	return 0;
}

