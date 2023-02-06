// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s0,s1; cin >> s0 >> s1;

	int A = 0 , a = 0 , B = 0 , b = 0;
	A = (s0[0]-'0')*10 + (s0[1]-'0');
	B = (s1[0]-'0')*10 + (s1[1]-'0');
	a = (s0[3]-'0')*10 + (s0[4]-'0');
	b = (s1[3]-'0')*10 + (s1[4]-'0');

	int ans = ((B*60 + b) + (A*60 + a)) / 2;
	int h = ans / 60 , m = ans % 60;

	if (h < 10) cout << '0';
	cout << h << ":";
	if (m < 10) cout << '0';
	cout << m;
	




	return 0;
}