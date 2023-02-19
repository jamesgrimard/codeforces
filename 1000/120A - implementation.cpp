// github.com/jamesgrimard/codeforces
#include <bits/stdc++.h>

using namespace std;

int main() {
	//ios_base::sync_with_stdio(false); cin.tie(0); cout.tie();
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	string s ; cin >> s;
	int n ; cin  >> n;

	if (s == "front" && n == 1) cout << "L";
	if (s == "back" && n == 1) cout << "R";
	if (s == "front" && n == 2) cout << "R";
	if (s == "back" && n == 2) cout << "L";

	return 0;
}



