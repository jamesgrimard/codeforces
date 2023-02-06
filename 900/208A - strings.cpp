// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();

	string s;
	cin >> s;
	
	regex r("WUB");
	s = regex_replace(s,r," ");

	cout << s << endl;

	return 0;
}