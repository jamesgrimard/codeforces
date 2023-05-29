// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	int n; cin >> n;
	string s = "";
	for (int i=0;i<n/2;i++) s += '1';
	if (n % 2) s = "7" + s.substr(0,s.size()-1);

	cout << s;


	return 0;	
}

		