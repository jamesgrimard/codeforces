// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int a, b; cin >> a >> b;

	string s = "" , S = "";
	for (int i=0;i<1128;i++) {
		s += '8';
		S += '1';
	}
	S += '1';
	s += '9';

	cout << s << '\n' << S;

	return 0;	
}